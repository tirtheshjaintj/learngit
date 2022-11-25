#include <stdio.h>

int main(){
//Design a simple Calculator to perform all Arithmetic Operations.
int a,b,ch;
int num[5]={1,2,3,4,5,6};
printf("Enter 1st Number= ");
scanf("%d",&a);
printf("Enter 2nd Number= ");
scanf("%d",&b);
printf("Enter 1 for Add , 2 for Subtract , 3 for Product , 4 for Division and 5 for Modulus");
scanf("%d",&ch);

switch (ch){
case 1:
	printf("%d",a+b);
case 2:
	printf("%d",a+b);

}

}
