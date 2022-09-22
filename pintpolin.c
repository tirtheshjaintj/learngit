#include <stdio.h>

int palindrome(int n){
int remain,reverse=0,original;
original=n;
while(n!=0){
    remain=n%10;
    reverse=reverse*10+remain;
    n/=10;
    printf("%d\n",n);
}
if(original==reverse){
return 1;
}
else{
    return 0;
}
}

int main(){
int n;
printf("Enter An Integer: ");
scanf("%d",&n);
if(palindrome(n)){
    printf("%d Is An Integer Polindrome",n);
}
else{
    printf("%d Is An Not An Integer Polindrome",n);
}
}