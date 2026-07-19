#include <stdio.h>
int main()
{
/*  To insert an element at a given location of an array. 
consider an array have total 10 elements arr[10]={34,67,13,80,95……} and first five elements 
have value rest 5 are empty now insert new value 77 at 3rd position means insert new value “77” between 67 and 13  */
    int arr[10] = {34, 67, 13, 80, 95}; 
    int size = 5;       
    int position = 2;   
    int value = 77;

    printf("Original array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    for(int i = size; i > position; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[position] = value;
    size++;

    printf("\nArray after insertion: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
/*After completion of new value insertion 77 in question 2nd 
now Delete value 80 in above array. */
int positionToDelete = 4;

 for (int i = positionToDelete; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("\nArray after deletion: ");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}