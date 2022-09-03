#include<stdio.h>
int main()
{ int n, add=0;
    printf(" Cube of n natural number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        add+=i*i*i;
    }
    printf("sum of %d  number cubes is %d ",n,add);
    return 0;
}
