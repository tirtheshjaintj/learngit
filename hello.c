#include <stdio.h>

int main(){
    int a;
printf("Enter Any Number");
scanf("%d",&a);
printf("%d You Entered This %d\n",a,a);
if(a>=0){
printf("%d is +ve",a);
}
else{
    printf("%d is -ve",a);
}
return 0;
}