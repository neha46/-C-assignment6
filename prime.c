#include<stdio.h>
int main()
{
int n,rem,sum=0;
printf("enter the number\n");
scanf("%d",&n);
int Number=n;
while(n!=0)
{
    rem=n%10;
    sum+=rem;
    n=n/10;
}


for(int i=2;i<sum;i++)
{ if(Number%i==0)
    {printf("Number is not prime");
    break;}
    else
    {
        printf("Prime number");
        break;
    }
}
    return 0;
}

