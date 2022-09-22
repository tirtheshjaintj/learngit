#include <stdio.h>

int run(){
    int static main=0;
    main++;
    return main;
}

int main(){
    static int main;
    int main1;
    main=run();
    printf("%d\n",main);
    main=run();
    printf("%d\n",main);
     main=run();
    printf("%d\n",main);
}