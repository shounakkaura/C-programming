#include<stdio.h>
int main () {
    int arr[5]={20,45,13,67,39};
    int sum=0,n=5;
    for (int i = 0;i<n;i++){
        sum+=arr[i];
    }
    printf("Mean of the array is: %d",sum/n);

    // for median we need to sort the array
    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    if (n % 2 == 0){
        int median = (arr[n/2 - 1] + arr[n/2]) / 2;
        printf("\nMedian of the array is: %d", median);
    } else {
        printf("\nMedian of the array is: %d", arr[n/2]);
    }
    // mode
    int Maxcount = 0;
    int mod = 0;

    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j]){
                count++;
            }
        }
        if (count > Maxcount){
            Maxcount = count;
            mod = arr[i];
        }
    }
    printf("\nMode of the array is: %d", mod);

    return 0;
}