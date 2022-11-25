#include <stdio.h>
int main(){
int i,fn=0,sn=1,sum=0,sum1=0,num;
printf("Enter The No. For Series ");
scanf("%d",&num);
printf("%d+%d",fn,sn); 
for(i=0;i<(num-2);i++){
sum=fn+sn;
printf("+%d",sum);
fn=sn;
sn=sum; 
sum1+=sum;
}
printf(" = %d\n",sum1+1);
}
