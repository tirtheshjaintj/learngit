#include <stdio.h>

int main(){
 FILE *ptr =NULL;
 char string[34];
 ptr=fopen("text.txt","r");
//  ptr=fopen("text.txt","r");
//  fscanf(ptr,"%s",string);
//  printf("The Content Of This File has %s\n",string);
// fprintf(ptr,"%s","Hello Man");
// char c;
// c=fgetc(ptr);
// printf("%c",c);
fgets(string,34,ptr);
printf("%s",string);

fclose(ptr);
return 0;
}