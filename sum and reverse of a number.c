#include<stdio.h>
int main()
{
int num,sum=0,rev=0,d;
printf("enter the number :");
scanf("%d",&num);
while(num>0){
d=num%10;
num=num/10;
sum=sum+d;
rev=rev*10+d;
}
printf("sum of a number is:%d\n",sum);
printf("reverse of a number is : %d",rev);
return 0;
}
