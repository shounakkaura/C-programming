#include<stdio.h>
int main () {
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {3,4,5,6,7};  
    int unionArr[10];
    int intersectionArr[5];
    int index = 5;
    int unionSize = 0; 
    for (int i=0; i<5;i++){
        unionArr[unionSize] = arr1[i];
        unionSize++;
    }
        for (int i=0; i<index; i++){
            if (arr2[i] != arr1[0] && arr2[i] != arr1[1] && arr2[i] != arr1[2] && arr2[i] != arr1[3] && arr2[i] != arr1[4]){
                unionArr[unionSize] = arr2[i];
                unionSize++;
            }
        }
        int k=0;
        for (int i=0;i<5;i++){
            for (int j=0;j<5;j++){
                if (arr1[i] == arr2[j]){
                    intersectionArr[k] = arr1[i];
                    k++;
                    break;
                }
            }
        }
        printf("Union of two arrays: ");
        for (int i=0; i<unionSize;i++){
            printf("%d ", unionArr[i]);
        }   
        printf("\nIntersection of two arrays: ");
        for (int i=0; i<k;i++){
            printf("%d ", intersectionArr[i]);
        }
    return 0;
}