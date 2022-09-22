#include <stdio.h>

int main(){
    char name[30],pname[30];
    int prc,amt;
    float disc;
    float disc1;
    float amt1;
do{
    printf("\nEnter Your Name = ");
    scanf("%s",&name);
    printf("Enter Your Product Name = ");
    scanf("%s",&pname);
    printf("Enter Your Product Price = ");
    scanf("%d",&prc);
    printf("Enter Your Product Amount = ");
    scanf("%d",&amt);
    printf("Your Total Is = %d\n",prc*amt);
 printf("Enter The Discount\t");
    scanf("%f",&disc);
    amt1=(float) prc*amt;
    disc1=(float) amt1*(disc/100);
    printf("\n Now Your Discounted Payable price After %.2f percent discount Is %.2f",disc,amt1-disc1);
}while(1==1);
    return 0;
}