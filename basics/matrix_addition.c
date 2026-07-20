#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };

    printf("Matrix is:\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    //sum of individual row 
    int i,j,rowsum=0,colsum=0;
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            rowsum+=matrix[i][j];
        }
        printf("sum of row %d is %d\n",i+1,rowsum);
        rowsum=0;
    }
    //sum of individual column
     for (j=0;j<3;j++){
        for(i=0;i<3;i++){
            colsum+=matrix[i][j];
        }
        printf("sum of row %d is %d\n",i+1,colsum);
        colsum=0;
    }
    return 0;
}