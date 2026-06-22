#include <stdio.h>
int main()
{
    int num, i;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter your number : ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
    }
    return 0;
}