#include <stdio.h>
int pattern(int n){
for (int i=1;i<=n;i++){
    for(int j=i;j<=n;j++){
        printf("*");
    }
    printf("\n");
}
for (int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
        printf("*");
    }
    printf("\n");
}
}
int main(){
do{
int pat;
printf("How Many Stars Do You Want?\t");
scanf("%d",&pat);
pattern(pat);
}while(1==1);
return 0;
}
