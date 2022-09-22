#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char * replaceWord(const char * str,const char * oldWord,const char * newWord){
char * resultString;
int i,count=0;
int newlen=strlen(newWord);
int oldlen=strlen(oldWord);
for(int i=0;str[i]!='\0';i++){
    if(strstr(&str[i],oldWord)==&str[i]){
count++;
//Jump Over
i=i+oldlen-1;

    }
    resultString=(char *) malloc(i+count * (newlen-oldlen)+1);
}
i=0;
while(*str){
    if(strstr(str,oldWord)==str){
        strcpy(&resultString[i],newWord);
        i+=newlen;
        str+=oldlen;
    }
    else{
        resultString[i]= *str;
        i+=1;
        str+=1;
    }
}
resultString[i]='\0';
return resultString;
}
int main(){
FILE * ptr=NULL;
FILE * ptr2=NULL;
ptr=fopen("bill.txt","r");
ptr2=fopen("genbill.txt","w");
char str[400];
fgets(str,400,ptr);
printf("The Bill Format Is %s\n\n",str);
char *newstr;
newstr=replaceWord(str,"{{name}}","Tirthesh Jain ");
newstr=replaceWord(newstr,"{{item}}","Pencil");
newstr=replaceWord(newstr,"{{item}}","TJ Stationary");
fprintf(ptr2,"%s",newstr);
printf("The Generated Bill Format Is%s",newstr);
fclose(ptr);
fclose(ptr2);
    return 0;
}