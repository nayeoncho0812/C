#include <stdio.h>

int main() 
{
    int i, j, k;
    printf("Enter two numbers to add: ");
    scanf("%d %d", &i, &j);
    k = i + j;
    printf("Result: %d\n", k);
    return 0;
}