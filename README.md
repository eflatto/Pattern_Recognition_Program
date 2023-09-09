# Pattern Recognition Program


This program created in C is designed to recognize interesting patterns within a given string. It operates in an infinite loop, continuously receiving input from standard input and identifying specific patterns within the input string. The recognized patterns are categorized into six types, ranked in decreasing order of rarity:

1. **Singleton:** A singleton string consists of only one letter. Examples: "mmmmm," "qqqqqqq," "rr," "s," "yyy."

2. **Arithmetic:** A string made of subsequent alphabetical letters that appear in alphabetical order. Examples: "bcdef," "pqrstuvwx," "jk," "y."

3. **Reverse Arithmetic:** A string made of subsequent alphabetical letters that appear in reverse alphabetical order. Examples: "fedcb," "xwvutsrqp," "kj," "y."

4. **Balanced Tripartite:** A string made of three identical parts. Examples: "busbusbus," "laptoplaptoplaptop," "zzz."

5. **Balanced Bipartite:** A string made of two identical halves. Examples: "ticktick," "hophop," "tantan," "nocknock," "nn."

6. **Palindrome:** A palindrome reads the same backward as forward. Examples: "abcba," "bob," "g."

## How to Use

1. Run the executable file (pattern_finder).
2. Enter a string when prompted.
3. The program will identify and print the recognized patterns for the input string.
4. If no pattern is found, the program will print a new line.


