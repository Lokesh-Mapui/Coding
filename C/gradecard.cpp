// gradecard
#include <stdio.h>
int main()
{
    int a, b, c, marks;
    printf("Enter  three marks\n");
    scanf("%d%d%d", &a, &b, &c);
    marks = ((a + b + c) / 3);
    printf("Total marks is:%d", marks);
    if (marks > 89)
    {
        printf("\nGrade is O");
    }
    else if (marks > 79)
    {
        printf("\nGrade is E");
    }
    else if (marks > 69)
    {
        printf("\n Grade is A ");
    }
    else if (marks > 59)
    {
        printf("\nGrade is B");
    }
    else if (marks > 40)
    {
        printf("\nYou are C");
    }
    else
    {
        printf("\n You are fail");
    }
    return 0;
}