#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    srand(time(NULL));
    // printf("Random Number %d\n",rand()%30);
    int i=0;
    int k=0;
    int comp1;
    int comp2;
    int sc1=0;
    int sc2=0;
    int  ch;
// printf("%s\n",person);
    printf("\t#####\t Please Enter \t 1 for Rock \t 2 for Paper \t 3 for Scissor\t #####\t\n");
again:
for(i=0;i<3;i++){
    printf("\aEnter Here <=>\t");
    scanf("%d",&comp2);
    int j=rand()%12;
    if(comp2==3){
        printf("You Chose Scissor\n");
        printf("VS\n");
    }
    else if(comp2==2){
        printf("You Chose Paper\n");
        printf("VS\n");
    }
    else if(comp2==1){
        printf("You Chose Rock\n");
        printf("\tVS\n");
    }
    if(j<=4){
     comp1=3; 
        printf("Comp Chose Scissor\n");
        }
    else if(j<=8){
        // printf("Paper\n");
      comp1=2;
        printf("Comp Chose Paper\n");
    }
    else{
        // printf("Rock\n");
    comp1=1;
                printf("Comp Chose Rock \n");
    }
  
if(comp1==comp2){
    printf("Result <=> Its A Draw\n");

}
else if((comp1==1 && comp2==3)||(comp1==3 && comp2==2)||(comp1==2 && comp2==1) ){
    printf("Result <=>  Computer Won 1 Point \n");
 sc1++;
}
else if((comp2==1 && comp1==3)||(comp2==3 && comp1==2)||(comp2==2 && comp1==1) ){
    printf("Result <=> You Won 1 Point \n");
    sc2++;
}
  if(i==0){
    printf("\t\t######\t\t Next Round Starts \t\t#####\n");
    }
    else if(i==1){
    printf("\t\t######\t\t Final Round Starts \t\t#####\n");
    }
    else{
    }
    }
printf("Final Sore Is You %d And Computer %d\t\t\n",sc2,sc1);
if(sc1<sc2){
    printf("\t\t######\t\t Hey You Winner!,Congratulations You Won\t\t#####");
}
else if(sc1>sc2){
    printf("\t\t######\t\t Hey You Loser!, Computer Won This Time\t\t#####");
}
else{
    printf("\t\t######\t\t Hey You!, Its A Draw This Time \t\t#####\n");
}
printf("\nPress 1 to Play Again ");
scanf("%d",&ch);
if(ch==1){
    system("cls");
    printf("\t#####\t Please Enter \t 1 for Rock \t 2 for Paper \t 3 for Scissor\t #####\t\n");
    printf("\t\t######\t\t Next Game Starts Now \t\t#####\n");
	goto again;
}
else{

}

return 0;
    //   printf("%d",comp1==per1);
}
