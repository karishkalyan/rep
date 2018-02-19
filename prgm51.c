#include<stdio.h>
void main()
{
int num,digit,i,k,p[50];
printf("\n enter the number:");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
p[k]=digit;
k++;
num=num/10;
}
for(i=k-1;i=0;i--)
{
printf("%d\t",p[i]);
}
getch();
}



