#!/usr/bin/python3
palindrome = ""
big = 0
for i in range(0, 1000):
    for j in range(0, 1000):
        mul = i * j
        palindrome = str(mul)
        if palindrome == palindrome[::-1]:
            if mul > big:
                big = mul
print(big)
