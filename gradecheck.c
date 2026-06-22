#include <stdio.h>
int main()
{
    int marks, i, tot;
    float pct;
    tot = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter your marks : \n");
        scanf("%d", &marks);
        if (marks < 0 || marks > 100)
        {
            printf("Invalid marks input\n");
        }
        tot = tot + marks;
    }
    pct = tot / 5.0;
    printf("Percentage = %.2f\n", pct);
    if (pct >= 90)
    {
        printf("Grade A");
    }
    else if (pct >= 75 && pct < 90)
    {
        printf("Grade B");
    }
    else if (pct >= 60 && pct < 75)
    {
        printf("Grade C");
    }
    else if (pct >= 40 && pct < 60)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}