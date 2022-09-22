#include <stdio.h>

int main(){
do{
   int fn=0,sn=1,sum=0,sum1=0,num;
printf("\nEnter The Number For Series ");
scanf("%d",&num);
printf("%d+%d",fn,sn);
for(int i=1;i<=(num-2);i++){
sum=fn+sn;
printf("+%d",sum);
fn=sn;
sn=sum;
sum1+=sum;
}
printf(" = %d\n",sum1+1);
}while(1==1);
    return 0;

}