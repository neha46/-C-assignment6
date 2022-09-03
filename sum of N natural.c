#include<stdio.h>
int main()
{ int sum=0,num;
printf("enter the number\n");
scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    }
    printf("sum of natural no is %d ",sum);
    return 0;
}
