#include<stdio.h>
void main()
{
    int hex,bin=0,i=1,rem;
    printf("enter number in decimal");
    scanf("%d",&hex);
    while(hex!=0)
    {
        rem=hex%16;
        hex=hex/16;
        bin=bin+rem*i;
        i=i*10;
    }
    printf("%d",bin);
}
