#include<stdio.h>

int linearSearch(int *, int, int); //function to find the position of key in the given array

int main()
{
    int size,result,key;
    printf("\nenter number of elements:");
    scanf("%d", &size);        //indicates the size of the array
    int arr[size];
    printf("\nenter the elements:");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);    //Reading input values
    }
    printf("\nEnter the element to be searched:");
    scanf("%d", &key);           //element to be searched
    result = linearSearch(arr,size,key);   //calling the linearSearch() function
    if(result == -1)
        printf("\n%d not found", key);
    else
        printf("\n%d found at position %d", key, result);
    return 0;
}

int linearSearch(int arr[], int size, int key) //this function compares every element of the array with the key
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
            return i+1;    //returns the position of key if found
    }
    return -1;             //returns -1 if key is not found
}

/* Time complexity of linear search:
   Successful search:
        Best case : O(1)
        Worst case : O(size)
    Unsuccessful search : O(size)
*/
