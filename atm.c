#include <stdio.h>

int main(){
int amt;
printf("Enter Your Amount Here\t");
scanf("%d",&amt);
printf("The Amount You Needed Is %d\n",amt);
printf("The No. Of Rs 2000 Notes Is  %d\n",amt/2000);
amt%=2000;
printf("The No. Of Rs 500 Notes  Is  %d\n",amt/500);
amt%=500;
printf("The No. Of Rs 200 Notes  Is  %d\n",amt/200);
amt%=200;
printf("The No. Of Rs 100 Notes  Is  %d\n",amt/100);
amt%=100;
printf("The No. Of Rs 50 Notes  Is  %d\n",amt/50);
amt%=50;
printf("The No. Of Rs 10 Notes  Is  %d\n",amt/10);
amt%=10;
printf("The No. Of Rs 5 Notes  Is  %d\n",amt/5);
amt%=5;
printf("The No. Of Rs 1 Coins  Is  %d\n",amt/1);
return 0;
}