#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int i,f=1;
    printf("Enter your number :");
    scanf("%d",&n);
    if (n>0)
        {
            for(i=1;i<=n;i++)
            {
                f=f*i;
            }
        printf("Factorial of number is %d",f);
        }
    else
        printf("number is negative");
    return 0;
}
