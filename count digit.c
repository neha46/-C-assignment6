#include<stdio.h>
int main()
{ int rem, c=0;
int n;
printf("enter the number\n");
scanf("%d",&n);
while(n!=0)
{
    rem=n%10;
   c+=1;
    n=n/10;
}
    printf("digit is %d ",c);
    return 0;
}

