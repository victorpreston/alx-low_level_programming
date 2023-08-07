#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define ERR_USAGE "Usage: %s elf_filename\n"
#define ERR_READ "Error: Can't read file %s\n"
#define ERR_ELF_HEADER "Error: Cannot read ELF header from %s\n"
#define ERR_NOT_ELF "Error: Not an ELF file\n"

void close_elf(int fd);

void close_elf(int fd)
{
    if (close(fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(98);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        dprintf(STDERR_FILENO, ERR_USAGE, argv[0]);
        exit(98);
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, ERR_READ, argv[1]);
        exit(98);
    }

    Elf64_Ehdr header;
    ssize_t r = read(fd, &header, sizeof(header));
    if (r == -1 || r != sizeof(header))
    {
        close_elf(fd);
        dprintf(STDERR_FILENO, ERR_ELF_HEADER, argv[1]);
        exit(98);
    }

    close_elf(fd);

    if (header.e_ident[0] != 0x7F || strncmp((char *)&header.e_ident[1], "ELF", 3) != 0)
    {
        dprintf(STDERR_FILENO, ERR_NOT_ELF);
        exit(98);
    }

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x", header.e_ident[i]);
        if (i < EI_NIDENT - 1)
            printf(" ");
        else
            printf("\n");
    }

    printf("  Class:                             ");
    switch (header.e_ident[EI_CLASS])
    {
    case ELFCLASSNONE: printf("none\n"); break;
    case ELFCLASS32: printf("ELF32\n"); break;
    case ELFCLASS64: printf("ELF64\n"); break;
    default: printf("<unknown: %x>\n", header.e_ident[EI_CLASS]); break;
    }

    printf("  Data:                              ");
    switch (header.e_ident[EI_DATA])
    {
    case ELFDATANONE: printf("none\n"); break;
    case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
    case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
    default: printf("<unknown: %x>\n", header.e_ident[EI_DATA]); break;
    }

    printf("  Version:                           %d", header.e_ident[EI_VERSION]);
    switch (header.e_ident[EI_VERSION])
    {
    case EV_CURRENT: printf(" (current)\n"); break;
    default: printf("\n"); break;
    }

    printf("  OS/ABI:                            ");
    switch (header.e_ident[EI_OSABI])
    {
    case ELFOSABI_NONE: printf("UNIX - System V\n"); break;
    case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
    case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
    case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
    case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
    case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
    case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
    case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
    case ELFOSABI_ARM: printf("ARM\n"); break;
    case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
    default: printf("<unknown: %x>\n", header.e_ident[EI_OSABI]); break;
    }

    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    switch (header.e_type)
    {
    case ET_NONE: printf("NONE (None)\n"); break;
    case ET_REL: printf("REL (Relocatable file)\n"); break;
    case ET_EXEC: printf("EXEC (Executable file)\n"); break;
    case ET_DYN: printf("DYN (Shared object file)\n"); break;
    case ET_CORE: printf("CORE (Core file)\n"); break;
    default: printf("<unknown: %x>\n", header.e_type); break;
    }

    printf("  Entry point address:               %#lx\n", header.e_entry);

    return 0;
}
/**********************STOP*************************/
