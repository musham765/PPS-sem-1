#include<stdio.h>
int gcd(int n1,int n2)
{
    if(n2!=0)
        return gcd(n2,n1%n2);
    return n1;
}
int main()
{
    int a,b,result;
    printf("enter two number");
    scanf("%d %d ",&a,&b);
    result=gcd(a,b);
    printf("gcd of %d &%d is %d",a,b,result);
    return 0;
}
