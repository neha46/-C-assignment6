#include<stdio.h>
int main()
{ int n,add=0;
    printf(" Square of n natural number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       add+=i*i;
    }
    printf("sum of squares of %d number is %d",n,add);
    return 0;
}


