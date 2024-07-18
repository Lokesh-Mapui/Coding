#include<stdio.h>

int main(){

int matrix[3][3];
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("Enter the element in the index %d %d : ",i,j);
        scanf("%d",&matrix[i][j]);
    }
}

// Printing the element in row wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            printf("The matrix elements are : %d \n",matrix[i][j]);
        }
        
    }
        printf("\n");
return 0;
}
