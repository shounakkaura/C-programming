#include<stdio.h>
void tempswap(int *,int *);
void swap(int *,int *);

int main (){
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("Before swapping Numbers are: ");
    printf("x = %d & y = %d\n",x,y);
    tempswap(&x,&y);
    printf("After swapping Numbers are: ");
    printf("x = %d & y = %d\n",x,y);
    //swaping without temp 
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("Before swapping Numbers are: ");
    printf("x = %d & y = %d\n",x,y);
    swap(&x,&y);
    printf("After swapping Numbers are: ");
    printf("x = %d & y = %d\n",x,y);
    return 0;
    }
void tempswap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swap(int *x,int *y){
    *x = *x+*y;
    *y=*x-*y;
    *x=*x-*y;
}