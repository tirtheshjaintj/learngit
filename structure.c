#include <stdio.h>
#include <string.h>
typedef struct student
{
    int id;
    int marks;
    char name[20];
}stu;
typedef union boys
{
int id;
int marks;
}un;
int main()
{
    struct student tj, ravi, shubham;
    un tj1;
    stu pj;
    tj.id = 1;
    ravi.id = 2;
    shubham.id = 5;
    pj.id=24;
    tj.marks = 1;
    ravi.marks = 2;
    shubham.marks = 5;
    strcpy(tj.name, "Tirthesh Jain");
strcpy(shubham.name, "Shubham Jain");
    printf("\tTJ NAME %s\n", shubham.name);
  
    tj1.marks=121;
      tj1.id=12;
    printf("%d\t %d",tj1.id,tj1.marks);
    return 0;
}