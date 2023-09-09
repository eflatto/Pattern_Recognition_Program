#include <string.h>

int is_palindrome(char str[])
{
    // left pointer
    int left = 0;
    // right pointer
    int right = strlen(str) - 1;

    while (left < right)
    {
        // if char at left != char at right its not a palindorme
        if (str[left] != str[right])
        {
            return 0;
        }
        else
        {
            // move pointers towards the middle
            left++;
            right--;
        }
    }
    return 1;
}

int is_singleton(char str[])
{
    // left pointer
    int left = 0;
    // right pointer
    int right = strlen(str) - 1;

    while (left < right)
    {
        // if char at 1st index != char at right pointer its not a singleton
        if (str[left] != str[right])
        {
            return 0;
        }
        else
        {
            right--;
        }
    }
    return 1;
}
int is_arithmetic(char str[])
{
    // left pointer
    int left = 0;
    // right pointer
    int right = 1;

    while (str[right] != '\0')
    {
        // if ascii value left is greater than right not arithmetic
        if (str[left] > str[right] || str[left] == str[right])
        {
            return 0;
        }
        else
        {
            // move pointers towards the middle
            left++;
            right++;
        }
    }
    return 1;
}

int is_reversearithmetic(char str[])
{
    // left pointer
    int left = 0;
    // right pointer
    int right = 1;

    while (str[right] != '\0')
    {
        if (str[left] < str[right] || str[left] == str[right])
        {
            return 0;
        }
        else
        {
            left++;
            right++;
        }
    }
    return 1;
}
int is_balanced_bipartite(char str[])
{
    int length = strlen(str);
    // left pointer
    int left = 0;
    // right pointer
    int right = length / 2;

    // Check if the length of the string is even.
    if (length % 2 != 0)
    {
        return 0; // If it's not even, it cannot be divided into two equal parts.
    }
    while (right < length)
    {
        if (str[left] != str[right])
        {
            return 0;
        }
        else
        {
            left++;
            right++;
        }
    }
    return 1;
}
int is_balanced_tripartite(char str[])
{
    int length = strlen(str);
    int third = length / 3;

    // left pointer
    int first_part = 0;
    // middle pointer
    int second_part = third;
    // last third pointer
    int third_part = third * 2;
    // Check if the length of the string is even.
    if (length % 3 != 0)
    {
        return 0; // If it's not divisible by 3, it cannot be divided into three equal parts.
    }
    while (third_part < length)
    {
        if (str[first_part] != str[second_part] || str[first_part] != str[third_part])
        {
            return 0; // If characters don't match, it's not balanced tripartite.
        }
        else
        {
            first_part++;
            second_part++;
            third_part++;
        }
    }
    return 1;
}