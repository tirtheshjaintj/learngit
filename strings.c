#include <stdio.h>
#include <string.h>
void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'t', 'i', 'r', 't', 'h','e','s','h','\0'};
    char str[20];
    char str1[]=" Written By TJ";
    gets(str);
    // scanf("%s",str);
    printf("Input Length %d\n",strlen(str));
    printStr(str);
    printf("%s\n",strcat(str,str1));
    printf("%s\n",str);
    printf("%s\n",strrev(str));
    return 0;
}
