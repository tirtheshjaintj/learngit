#include <stdio.h>
int hello(int b[],int j){
    int k=0;
    for(int i=0;i<j;i++){
    printf("%d\t",b[i]);
    k+=b[i];
    }
    printf("\nSum Of All Terms Is %d\n",k);
    return 0;
}

void func2(int *ptr,int j)
{
    for (int i = 0; i < j; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
}


int main(){
    int a[]={1,23,45,56,89,56,78,37,58,50,100,56};
       int j =(int) sizeof(a)/4;
    hello(a,j);
    func2(a,j);
    return 0;

}