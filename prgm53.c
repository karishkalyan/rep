#include<stdio.h>
void main()
{
int num,digit,sum=0;
printf("\n enter the num:");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
num=num/10;
sum=sum+digit;
}
printf("\n the sum of the numbers is %d",sum);
getch();
}
