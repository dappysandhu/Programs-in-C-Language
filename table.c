#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,a,n;
printf("Enter A Number :");
scanf("%d",&n);
while(i<=10)
a=i*n;
printf("%d*%d=%d",n,i,a);
i++;
getch();
}