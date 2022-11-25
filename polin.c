#include <stdio.h>

int main(){
int i,rem,t,sum=0,rem1=0;
printf("Enter any Number ");
scanf("%d",&i);
t=i;
for(int j=2;j<i-1;j++){
if(i%j==0){
    printf("%d Is Not Prime\n",i);
        break;
}
else{
    printf("%d Is Prime\n",i);
        break;
}
}
while(i>0){
rem=i%10;//65
rem1+=rem;
sum=(sum*10)+rem;
i/=10;
}
printf("The Reverse Of Number Is %d\t\n",sum);
printf("The Sum Of Digits Of Number Is %d\t\n",rem1);
if(sum==t){
printf("%d Is Palindrome\n",t);
}
else{
printf("%d Is Not Palindrome\n",t);
}
    
    return 0;
}