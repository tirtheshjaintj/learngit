#include <stdio.h>
# include <string.h>
void parser1(char *string){
    int in=0; //Variable to track whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++){
        if(string[i] == '<'){
            in = 1;
            continue;
        }
        else if(string[i]=='>')
        {
            in = 0;
            continue;
        }
        if(in==0){
            string[index] = string[i];
            index ++;
        }
    }
    string[index] = '\0';

    //Remove the trailing spaces from the beginning
    // while(string[0] ==' '){
    //     //Shift the string to the left
    //     for (int i = 0; i < strlen(string); i++)
    //     {
    //         /* code */
    //         string[i] = string[i+1];
    //     }
    // }
    // //Remove the trailing spaces from the end
    // while(string[strlen(string) - 1] == ' ')
    // {
    //     string[strlen(string) - 1] = '\0';

    // }
}
int main(){
    char string[]="<h1>Hello World Br0</h1>";
    parser1(string);
    printf("%s\n",string);
 
}