#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(NULL));
    // printf("Random Number %d\n",rand()%30);
    system("title Rock Paper Scissors By TJ");
system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('A Very Welcome To The Rock  Paper Scissor Game Made By Tirthesh Jain')");
    system("color A");
	int i=0;
    int k=0;
    int comp1;
    int comp2;
    int sc1=0;
    int sc2=0;
    int  ch;
    printf("Starts At %s %s\n",__DATE__,__TIME__);
// printf"%s\n",person);
system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('Please Enter  1 for Rock  2 for Paper  3 for Scissor')");

    printf("\t#####\t Please Enter \t 1 for Rock \t 2 for Paper \t 3 for Scissor\t #####\t\n\a");

again:
for(i=0;i<3;i++){
    printf("\aEnter Here <=>\t\a");
    scanf("%d",&comp2);
    int j=rand()%12;
      if(comp2==3){
        printf("You Chose Scissor\n\a");
        printf("VS\n");
    }
    else if(comp2==2){
        printf("You Chose Paper\n\a");
        printf("VS\n");
    }
    else if(comp2==1){
        printf("You Chose Rock\n\a");
        printf("\tVS\n");
    }
    if(j<=4){
     comp1=3; 
        printf("Computer Chose Scissor\n\a");
        }
    else if(j<=8){
        // printf("Paper\n");
      comp1=2;
        printf("Computer Chose Paper\n\a");
    }
    else{
        // printf("Rock\n");
    comp1=1;
                printf("Computer Chose Rock \n\a");
    }
  
if(comp1==comp2){
        	system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('None Of You Get Any Point Its Draw')");
    printf("Result <=> Its A Draw\n\a");
}
else if((comp1==1 && comp2==3)||(comp1==3 && comp2==2)||(comp1==2 && comp2==1) ){
    system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('Computer Won 1 Point ')");
    printf("Result <=>  Computer Won 1 Point \n\a");
    sc1++;
}
else if((comp2==1 && comp1==3)||(comp2==3 && comp1==2)||(comp2==2 && comp1==1) ){
    system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('You Won 1 Point')");
  
    printf("Result <=> You Won 1 Point \n\a");

    sc2++;
}
  if(i==0){
    printf("\t\t######\t\t Next Round Starts \t\t#####\n\a");
    }
    else if(i==1){
    printf("\t\t######\t\t Final Round Starts \t\t#####\n\a");
    }
    else{
    }
    }
printf("Final Score Is You %d And Computer %d\t\t\n\a",sc2,sc1);
if(sc1<sc2){
system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show(' Hey You Winner!,Congratulations You Won')");
    printf("\t\t######\t\t Hey You Winner!,Congratulations You Won\t\t#####\a");
}
else if(sc1>sc2){
	system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show(' Hey You Loser!, Computer Won This Time')");
    printf("\t\t######\t\t Hey You Loser!, Computer Won This Time\t\t#####\a");
}
else{	
    printf("\t\t######\t\t Hey You!, Its A Draw This Time \t\t#####\n\a");
	system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show(' Hey You!, Its A Draw This Time ')");

}
printf("\n Press 1 to Play Again ");
scanf("%d",&ch);
if(ch==1){
    system("cls");
        printf("Starts At %s %s\n",__DATE__,__TIME__);
    printf("Last Final Score Is You %d And Computer %d\t\t\n\a",sc2,sc1);
    sc2=0;
    sc1=0;
    printf("\t#####\t Please Enter \t 1 for Rock \t 2 for Paper \t 3 for Scissor\t #####\t\n\a");
    	system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('Next Game Starts Now Best Of Luck')");

    printf("\t\t######\t\t Next Game Starts Now \t\t#####\n\a");
	goto again;
}
else{
    	system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('Thank You For Playing Game By Tirthesh Jain')");

}
    //   printf("%d",comp1==per1);
}
