#include <stdio.h>
#include <math.h>
int main()
{
int num, orig, rem, sum = 0;
int len=0,org;
//rem is remainder and original is the original number
printf("Enter Any Number: ");
scanf("%d", &num);
orig = num;
org=num;
while(org>0){
    org/=10;
len++;
}
while(orig>0)
{
rem = orig%10;
sum =sum + pow(rem,len);
orig/=10;
}
if(sum == num){
printf("%d is an Armstrong number.",num);
}
else{
printf("%d is not an Armstrong number.",num);
}
return 0;
}