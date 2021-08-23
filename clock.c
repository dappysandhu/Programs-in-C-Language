#include<conio.h>
#include<stdio.h>
void main()
{
int S, h, m, s;
printf( "Second: " );
scanf( "%d",&S);
h=S/3600;
S=S%3600;
m=S/60;
s=S%60;
printf("\nh:m:s\n%d:%d:%d", h, m, s);
getch();
}