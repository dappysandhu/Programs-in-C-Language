#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,sum=0;
printf("Enter a number:");
scanf("%d",&n);
while(n>0)
{
a=n%10;
sum=sum+a;
n=n/10;
}
printf("Sum = %d",sum);
getch();
}