#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    system("title Tirthesh Jain Super App");
    system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('A Very Welcome To This Super App Made By Tirthesh Jain')");
    system("color A");
    int ch, ch1, ch2, ch3;
    char name[20];
    printf("*_* Starts At %s %s *_*\n", __DATE__, __TIME__);
again:
    system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('Please Enter 1 For Task Manager 2 For Rock Paper Scissors Game')");
    printf("\nPlease Press 1 For Task Manager 2 For Rock Paper Scissors Game");
    scanf("%d", &ch1);
    switch (ch1)
    {
    case 1:
        int ch2, i1 = 1, ch3;
        char data1[100];
    again2:
        printf("\nPlease Press 1 to save a new task , 2  to read the previous tasks and 3 To Clear The Tasks.");
        scanf("%d", &ch2);
        if (ch2 == 1)
        {
            FILE *filePointer;
            filePointer = fopen("task.txt", "a");
            printf("Please Enter The Task To Save For Future\n");
            fflush(stdin);
            gets(data1);
            if (strlen(data1) > 0)
            {
                fputs(data1, filePointer);
                fputs("\n", filePointer);
            }
            fclose(filePointer);
        }
        else if (ch2 == 2)
        {
            FILE *filePointer;
            char dataToBeRead[2];
            char buff[2] = "";
            filePointer = fopen("task.txt", "r+");
            fscanf(filePointer, "%s", buff);
            if (!*buff){
                printf("No Tasks Found\n");
            }
            rewind(filePointer);
            while (fgets(dataToBeRead, 100, filePointer) != NULL)
            {
                printf("Task %d:> \n%s", i1, dataToBeRead);
                printf("\n");
                ++i1;
            }
            fclose(filePointer);
        }
        else if (ch2 == 3)
        {
            FILE *filePointer;
            filePointer = fopen("task.txt", "w");
            fputs("", filePointer);
            fclose(filePointer);
        }
        else
        {
            system("cls");
            goto again2;
        }
        i1=1;
        printf("Press 1 To Start Task manager Again and 2 to Go To Main Menu");
        scanf("%d", &ch3);
        if (ch3 == 1)
        {
            system("cls");
            printf("*_* Starts At %s %s *_*\n", __DATE__, __TIME__);
            goto again2;
        }
        else if (ch3 == 2)
        {
            system("cls");
            printf("*_* Starts At %s %s *_*\n", __DATE__, __TIME__);

            goto again;
        }
        else{

        }
        break;
    case 2:
        int i = 0;
        int k = 0;
        int comp1;
        int comp2;
        int sc1 = 0;
        int sc2 = 0;
        printf("Starts At %s %s\n", __DATE__, __TIME__);
        // printf"%s\n",person);
        system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('Please Press  1 for Rock  2 for Paper  3 for Scissor')");

        printf("\t#####\t Please Press \t 1 for Rock \t 2 for Paper \t 3 for Scissor\t #####\t\n\a");

    again1:
        for (i = 0; i < 3; i++)
        {
            printf("\aEnter Here <=>\t\a");
            scanf("%d", &comp2);
            int j = rand() % 12;
            if (comp2 == 3)
            {
                printf("You Chose Scissor\n\a");
                printf("VS\n");
            }
            else if (comp2 == 2)
            {
                printf("You Chose Paper\n\a");
                printf("VS\n");
            }
            else if (comp2 == 1)
            {
                printf("You Chose Rock\n\a");
                printf("\tVS\n");
            }
            if (j <= 4)
            {
                comp1 = 3;
                printf("Computer Chose Scissor\n\a");
            }
            else if (j <= 8)
            {
                // printf("Paper\n");
                comp1 = 2;
                printf("Computer Chose Paper\n\a");
            }
            else
            {
                // printf("Rock\n");
                comp1 = 1;
                printf("Computer Chose Rock \n\a");
            }

            if (comp1 == comp2)
            {
                system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('None Of You Get Any Point Its Draw')");
                printf("Result <=> Its A Draw\n\a");
            }
            else if ((comp1 == 1 && comp2 == 3) || (comp1 == 3 && comp2 == 2) || (comp1 == 2 && comp2 == 1))
            {
                system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('Computer Won 1 Point ')");
                printf("Result <=>  Computer Won 1 Point \n\a");
                sc1++;
            }
            else if ((comp2 == 1 && comp1 == 3) || (comp2 == 3 && comp1 == 2) || (comp2 == 2 && comp1 == 1))
            {
                system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('You Won 1 Point')");

                printf("Result <=> You Won 1 Point \n\a");

                sc2++;
            }
            if (i == 0)
            {
                printf("\t\t######\t\t Next Round Starts \t\t#####\n\a");
            }
            else if (i == 1)
            {
                printf("\t\t######\t\t Final Round Starts \t\t#####\n\a");
            }
            else
            {
            }
        }
        printf("Final Score Is You %d And Computer %d\t\t\n\a", sc2, sc1);
        if (sc1 < sc2)
        {
            system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show(' Hey You Winner!,Congratulations You Won')");
            printf("\t\t######\t\t Hey You Winner!,Congratulations You Won\t\t#####\a");
        }
        else if (sc1 > sc2)
        {
            system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show(' Hey You Loser!, Computer Won This Time')");
            printf("\t\t######\t\t Hey You Loser!, Computer Won This Time\t\t#####\a");
        }
        else
        {
            printf("\t\t######\t\t Hey You!, Its A Draw This Time \t\t#####\n\a");
            system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show(' Hey You!, Its A Draw This Time ')");
        }
        printf("\n Press 1 to Play Again and Press 2 to go to Main Menu");
        scanf("%d", &ch);
        if (ch == 1)
        {
            system("cls");
            printf("Starts At %s %s\n", __DATE__, __TIME__);
            printf("Last Final Score Is You %d And Computer %d\t\t\n\a", sc2, sc1);
            sc2 = 0;
            sc1 = 0;
            printf("\t#####\t Please Enter \t 1 for Rock \t 2 for Paper \t 3 for Scissor\t #####\t\n\a");
            system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('Next Game Starts Now Best Of Luck')");

            printf("\t\t######\t\t Next Game Starts Now \t\t#####\n\a");
            goto again1;
        }
        else if(ch==2){
            system("cls");
            printf("*_* Starts At %s %s *_*\n", __DATE__, __TIME__);

            goto again;
        }
        else
        {
            system("PowerShell -Command Add-Type -AssemblyName PresentationFramework;[System.Windows.MessageBox]::Show('Thank You For Playing Game By Tirthesh Jain')");
        }
        //   printf("%d",comp1==per1);
    }
}
