//Binary search is a technique used for sorted elements
//In this technique, we compare the search element with the middle value of the array
//If it is the search element,then it returns the index
//If the search element is less than the middle element then we take the left sub array(0 to mid elements)
//If the search element is greater than the middle element then we take the  right sub array(mid+1 to last elements)
//We repeat this process until the element is found
//If the element is found , it returns the index of the element otherwise -1
//Here binary search is performed using recursion
#include<stdio.h>
int recursiveBinarySearch(int *, int, int, int);
int main()
{
    int size, result, key;
    printf("\nenter number of elements: ");
    scanf("%d", &size);        //indicates the size of the array
    int arr[size];
    printf("\nenter the elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);    //Reading input values in sorted order
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &key);           //element to be searched
    result = recursiveBinarySearch(arr, 0, size - 1, key);
    if(result == -1)
        printf("\n %d not found", key);
    else
        printf("\n%d found in position %d",key, result);
    return 0;
}

int binarySearch(int arr[],int low,int high,int key)
{
    if(high >= low)
    {

    int mid = (low + high)/2;
    if(arr[mid] == key)
        return mid+1;    //returns index of element if found
    else if(arr[mid] > key)
        return binarySearch(arr, 0, mid, key);
    else if(arr[mid] < key)
        return binarySearch(arr, mid + 1, high, key);
    }
    return -1;  // returns -1 if element is not found
}

//The best case time complexity for binary search is O(1)
//The worst case time complexity is O(log(n))
