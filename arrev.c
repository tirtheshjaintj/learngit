#include <stdio.h>

int num(int n[],int j){
int l[j];
int k=0;
for(int i=j-1;i>=0;i--){
    l[k]=n[i];
    k++;
}
for(int i=0;i<j;i++){
    n[i]=l[i];
}

}
int main(){
int n[]={15,52,35,545,56,78};
int j=sizeof(n)/4;
// printf("%d",j);
num(n,j);
for(int i=0;i<j;i++){
    printf("%d\t",n[i]);
}
printf("\n");

}