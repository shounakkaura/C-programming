#include <stdio.h>
int main () {
    //add
    int arrA[2][2] = { {1, 2}, {3, 4} };
    int arrB[2][2] = { {4,5}, {6,7} };
    int sum[2][2];
    int product[2][2];
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum[i][j]= arrA[i][j] + arrB[i][j];

        }
    }
    //multiply
   for (int i=0;i<2;i++){
        for(int j=0;j<2;j++)
        {
            product[i][j]=0;
            for (int k=0;k<2;k++){
                product[i][j]+=arrA[i][k]*arrB[k][j];
            }
        }
    }
printf("Matrix Addition: \n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d ",sum[i][j]);
    }
printf("\n");
}
printf("\nMultiplication of matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}

