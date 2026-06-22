#include <stdio.h>
int main()
{
    int num, i;
    i = 1;
    while(i<=5)
    {
        printf("Enter your number : ");
        scanf("%d", &num);
        if(num >0)
        {
            printf("Number is positive\n");
        }
        else if(num <  0)
        {
            printf("Number is negative\n");
        }
        else
        {
            printf("Number is zero\n");
        }
        i++;
    }
    return 0;
}