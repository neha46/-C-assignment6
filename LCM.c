#include<stdio.h>
#include<conio.h>
int main()
{
    int n1, n2,lcm,step;
    int max=0;
    printf("enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
        max=step=n1;
    else
        max=step=n2;
    while(1)
    {
        if(max%n1==0&& max%2==0)
           {
           break;
           }
        max+=step;
    }
    printf("LCM is %d:",max);
}
