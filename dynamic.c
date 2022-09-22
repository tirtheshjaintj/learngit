#include <stdio.h>
#include <stdlib.h>
#include "bro.c"
int sum=100;

int func1(int a ,int b){
    extern int sum;
    // sum=a+b;
    return sum;
}

int main(){
    

// int a=0;
// int *ptr12=&a;
// printf("%d",ptr12)
    // int sum=func1(2,3);
    // printf("%d\n",sum);
    // Malloc,Calloc,Realloc,Free Functions
    /*Malloc,Calloc,Realloc,Free Functions*/
//     int *ptr;
//     char a[]={'a',20,'b'};
//     int j=sizeof(a)/4;
//     printf("%d\n",a[1]);
//     printf("%c\n",a[0]);
//     a[3]='c';
//     a[6]='c';
//     printf("%c\n",a[6]);
// for(int i=0;i<j;i++){
//     printf("%c\t",a[i]);
// }
// printf("\n");
int *ptr;
int num;
printf("Enter The Size Of Array");
scanf("%d",&num);
ptr=(int*) malloc(num*sizeof(int));
// ptr=(int *) calloc(num,sizeof(int));
for(int i=0;i<num;i++){
    printf("The Value Of %d of this array is\t",i);
    scanf("%d",&ptr[i]);
}
 for(int i=0;i<num;i++){
     printf("%d\t",ptr[i]);
 }
 printf("Enter The Size Of Array");
scanf("%d",&num);
ptr=(int*)realloc(ptr,num*sizeof(int));
printf("\n");
for(int i=0;i<num;i++){
    printf("The Value Of %d of this array is\t",i);
    scanf("%d",&ptr[i]);
}
  for(int i=0;i<num;i++){
     printf("%d\t",ptr[i]);
 }
 printf("\n");
//  In The End I Cleared All Storage
 free(ptr);
   for(int i=0;i<num;i++){
     printf("%d\t",ptr[i]);
 }
 printf("\n");
return 0;
}