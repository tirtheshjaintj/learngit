#include <stdio.h>
#include <stdlib.h>
int sum(int a,int b){
    return a+b;
}
void greet(){
    printf("Welcome\n");
}
int main(){
printf("%d\n",sum(1900,18000000));
int(*ptr1) (int,int);
ptr1=&sum;
printf("%d\n",ptr1(1900,18000000));
printf("%d",sizeof(sum));

}