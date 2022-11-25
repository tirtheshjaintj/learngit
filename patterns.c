#include <stdio.h>
int pattern(int n){
	int i,k,j;
    int t=n;
// for (int i=1;i<=n;i++){
//     for(int j=i;j<=n;j++){
//         printf("*");
//     }
//     printf("\n");
// }
for (i=1;i<=n;i++){
     for(k=0;k<n-i;k++){
        printf(" ");
     }
    for(j=i;j>0;j--){
        printf("*");
    }
    printf("\n");
}
}
int main(){

int pat;
printf("How Many Stars Do You Want?\t");
scanf("%d",&pat);
pattern(pat);

return 0;
}
