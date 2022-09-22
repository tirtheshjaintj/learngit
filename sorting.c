#include <stdio.h>

int main(){
const int len=10;
int num[10]={21,20,31,3,14,100,12,99,11,21};
int t;
for(int i=0;i<len;i++){
// printf("%d",i);
for(int j=i+1;j<len;j++){
if (num[j]<num[i]){
         t = num[i];
         num[i] = num[j];
         num[j] = t;
      }
}
}
printf("Ascending Order = ");
for(int i=0;i<len;i++){
    printf("%d ",num[i]);
    continue;
}
printf("\n");
for(int i=0;i<len;i++){
// printf("%d",i);
for(int j=i+1;j<len;j++){
if (num[j]>num[i]){
         t = num[i];
         num[i] = num[j];
         num[j] = t;
      }
}
}
printf("Descending Order = ");
for(int i=0;i<len;i++){
    printf("%d ",num[i]);
    continue;
}
    return 0;
}