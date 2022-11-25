#include <stdio.h>
int main(){
int num,i,t=0;
char naam[]="Tirthesh";
printf("%d",sizeof(naam));
//Design a Program to find whether the given number is Prime or not Prime.
printf("Enter The Number\t");
scanf("%d",&num);

for(i=2;i<num;i++){
if(num%i==0){
    t++;
}	
}
if(t>0){
	printf("%d is Not Prime",num);
}
else{
	printf("%d is Prime",num);
}
}
