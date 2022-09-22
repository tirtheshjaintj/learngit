#include <stdio.h>

int main(){

int a;
do{
printf("Enter any Number\t");
scanf("%d",&a);
if(a%2==0){
printf("The Number %d is even\n",a);
}
else{
printf("The Number %d is odd\n",a);
}
}while(1==1);
    return 0;
}