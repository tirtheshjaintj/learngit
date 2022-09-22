#include <stdio.h>

int main(){
int a;
do{
printf("Enter Marks Of Student\t");
scanf("%d",&a);
if(a>=33){
printf("The Student has passed With %d marks\n",a);
if(a>=33 && a<55){
    printf("The Grade Is C for %d marks\n",a);
}
else if(a>55 && a<75){
    printf("The Grade Is B for %d marks\n",a);
}
else{
    printf("The Grade Is A for %d marks\n",a);

}
}
else{
printf("The Student has failed With %d marks\n",a);
}
}while(1==1);
    return 0;
}