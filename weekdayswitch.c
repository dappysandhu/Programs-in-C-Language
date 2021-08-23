
#include<conio.h>
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a Number between 1 - 7 :");
    scanf("%d",&n);
    switch(n)
    {
    case 1 :printf("Monday");
    break;
    case 2 :printf("Tuesday");
    break;
    case 3 :printf("Wednesday");
    break;
    case 4 :printf("Thursday");
    break;
    case 5 :printf("Friday");
    break;
    case 6 :printf("Saturday");
    break;
    case 7 :printf("Sunday");
    break;
    default:
    printf("Enter a Number b/w 1to7");
    }
    getch();
}