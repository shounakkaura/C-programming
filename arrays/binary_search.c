#include<stdio.h>
int main (){
    int arr[6]={45,88,90,102,34,12};
    int num=102;
    int i,j,temp,flag=0;
    //binary search requires sorted array so first we will sort the array usinf bubble sort
    for (i=0;i<6;i++) {
        for (j=0;j<6-1-i;j++) {
            if (arr[j]>arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }  
        int low = 0,high = 5,mid;
        while (low<=high) {
            mid = (low + high) / 2;
            if (arr[mid] == num) {
                printf("Element %d found at index %d\n", num, mid);
                flag = 1;
                break;
            }
            
            else if (arr[mid] < num){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
            mid = (low + high) / 2;
        }
        if (flag == 0) {
            printf("Element %d not found\n", num);
        }
    return 0;
}