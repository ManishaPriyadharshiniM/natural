# natural
#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,sum=0;
printf("\nenter the integer");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
sum=sum+i;
}
printf("sum of first %d natural numbers is=%d \n",a,sum);
return 0;
}
