#include <stdio.h>

#define hells "Bye Bye"
#define SQR(r) r*r

// #undef SQR
const int hell=10;

int main(){
int t=10;
printf("%d\n",&hell);
printf("%s\n",hells);
printf("Square of %d is %d\n",t,SQR(10));
printf("File Name Is %s\n",__FILE__);
printf("The Date Is %s\n",__DATE__);
printf("The Time Now Is %s\n",__TIME__);
printf("The Time Is %s\n",__TIMESTAMP__);
printf("Size Of In t%d\n",__SIZEOF_INT__);
printf("Total Lines Of Code %d\n",__LINE__);



}