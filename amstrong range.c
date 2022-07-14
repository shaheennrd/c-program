#include <stdio.h>

int main(){
    int num,r,sum,temp;
    int sn,en;

    printf("Input starting number of range: ");
    scanf("%d",&sn);

    printf("Input ending number of range : ");
    scanf("%d",&en);

    printf("Armstrong numbers in given range are: ");
    for(num=sn;num<=en;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
printf("\n");
}
