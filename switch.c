#include <stdio.h>

int main(){
int i;
this:
printf("Enter no. 1 to 7 ");
scanf("%d",&i);
switch (i)
{
case 1:
   printf("The Day Is Monday");
    break;
case 2:
   printf("The Day Is Tuesday");
    break;
case 3:
   printf("The Day Is Wednesday");
    break;
case 4:
   printf("The Day Is Thursday");
    break;
case 5:
   printf("The Day Is Friday");
    break;
case 6:
   printf("The Day Is Saturday");
    break;
case 7:
   printf("The Day Is Sunday");
    break;
default:
   printf("Enter Valid Value\n");
   goto this;
    
}

    return 0;
}