#include<stdio.h>
int fact(int);
int main()
{
    int n;
printf("enter n\n");
scanf("%d",&n);
printf("%d",fact(n));
}
int fact(n)
{ if(n==1|| n==0)
    return 1;
return n*fact(n-1);
}

