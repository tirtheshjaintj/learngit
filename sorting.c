#include <stdio.h>

int main(){
int len,t,min,max,sum=0,sr,sr1=0;
printf("Enter Any Length ");
scanf("%d",&len);
int num[len];
int i,j;
for(i=0;i<len;i++){
    scanf("%d",&num[i]);
}
for(i=0;i<len;i++){
    sum+=num[i];
}
printf("The Sum Is %d\n",sum);
min=num[0];
for(i=0;i<len;i++){
if(num[i]<min){
   min=num[i];
}
}
printf("The Minimum Value Is %d\n",min);
max=num[0];
for(i=0;i<len;i++){
if(num[i]>min){
   max=num[i];
}
}
printf("The Maximum Value Is %d\n",max);
printf("\nEnter Any Value To Search");
scanf("%d",&sr);
for(i=0;i<len;i++){
if(sr==num[i]){
    printf("\n%d Found At %d index\n",sr,i);
}
}
for(i=0;i<len;i++){
// printf("%d",i);
for(j=i+1;j<len;j++){
if (num[j]<num[i]){
         t = num[i];
         num[i] = num[j];
         num[j] = t;
      }
}
}

printf("Ascending Order = ");
for(i=0;i<len;i++){
    printf("%d ",num[i]);
    continue;
}
printf("\n");
for(i=0;i<len;i++){
// printf("%d",i);
for(j=i+1;j<len;j++){
if (num[j]>num[i]){
         t = num[i];
         num[i] = num[j];
         num[j] = t;
      }
}
}
printf("Descending Order = ");
for(i=0;i<len;i++){
    printf("%d ",num[i]);
    continue;
}
printf("\n Non-Prime Numbers Are ");
for(i=0;i<len;i++){
for(j=2;j<=len;j++){
if(num[i]%j==0){
printf(" %d ",num[i]);
}
}    
}
printf("\n Prime Numbers Are ");
for(i=0;i<len;i++){
for(j=2;j<=len;j++){
if(num[i]%j!=0){
printf(" %d ",num[i]);   
}
}    
}
    return 0;
}
