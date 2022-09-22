#include <stdio.h>

int main(){
int num;
printf("Enter any number : ");
scanf("%d",&num);

num%12==0?printf("Divisible By 12\n"):printf("Not Divisible By 12\n");

if(num%2==0){
    if(num%3==0){
printf("%d Is Divisible by 3\n",num);
}
printf("%d Is Even",num);
}

else{
printf("%d Is Odd",num);
    
}
    return 0;
}