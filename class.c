#include <stdio.h>

int main(){
int n1,n2,n3,n4;
printf("Enter 4 Numbers");
scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
if(n1<n2 && n1<n3 && n1<n4){
    printf("%d Is The Smallest Term.",n1);
}
else if(n2<n1 && n2<n3 && n2<n4){
    printf("%d Is The Smallest Term.",n2);
}
else if(n3<n1 && n3<n2 && n3<n4){
    printf("%d Is The Smallest Term.",n3);
}
else if(n4<n1 && n4<n2 && n4<n3){
    printf("%d Is The Smallest Term.",n4);
}
else{
    printf("All Are Equal.");
}


return 0;
}