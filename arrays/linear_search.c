#include<stdio.h>
int main() {
    int arr[6] = {45, 88, 90, 102, 34, 12};
    int num = 34;
    int i, flag = 0;
    for (i = 0; i < 6; i++) {
        if (arr[i] == num) {
            printf("Element %d found at index %d\n", num, i);
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("Element %d not found\n", num);
    }
    return 0;
}
