#include <stdio.h>

int main(int argc, char const *argv[])
{

    printf("%d\n",argc);
    for(int i=0;i<argc;i++){
        printf("Number %d Value %s Is \n ",i,argv[i]);
    }
    return 0;
}
