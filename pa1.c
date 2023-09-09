#include "pa1.h"

int main(void)
{
    char line[MAX_LENGTH];
    while (fgets(line, MAX_LENGTH, stdin)) // gets a single line from stdin
    {
        int len = strlen(line) - 1; // excluding the new line at the end
        line[len] = '\0';           // dropping the new line
        if (is_singleton(line))
            printf("singleton\n");
        if (is_arithmetic(line))
            printf("arithmetic\n");
        if (is_reversearithmetic(line))
            printf("reverse arithmetic\n");
        if (is_balanced_tripartite(line))
            printf("balanced tripartite\n");
        if (is_balanced_bipartite(line))
            printf("balanced bipartite\n");
        if (is_palindrome(line))
            printf("palindrome\n");
        printf("\n");
    }
}