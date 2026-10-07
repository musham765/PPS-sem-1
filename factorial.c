#include<stdio.h>
void main()
{
    int n,i,f;
    printf("n=enter the number");
    scanf("%d",&n);


    if (n<0)
        printf("no factorial");
    else
    {
        f=1;
        for(i=1;i<=n;i++)
            f=f*i;
    }
    printf("%d",f);
}
