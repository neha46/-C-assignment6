#include<stdio.h>
int main()
{ int sum=0;
int num;
printf("enter the number\n");
scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {if(i%2!=0)
            sum+=i;
    }
    printf("sum of N odd number is %d ",sum);
    return 0;
}
