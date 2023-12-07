#!/usr/bin/python3

def is_palindrome(num):
    # Check if the number is a palindrome
    return str(num) == str(num)[::-1]

largest_palindrome = 0

for i in range(100, 1000):
    for j in range(i, 1000):  # Start from i to avoid duplicate combinations
        product = i * j
        if is_palindrome(product) and product > largest_palindrome and 99 < i < 1000 and 99 < j < 1000:
            largest_palindrome = product

# Save the result to the file
with open('102-result', 'w') as file:
    file.write(str(largest_palindrome))

# Print the result for verification
print(largest_palindrome)
