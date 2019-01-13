//Jump search is a technique used for sorted arrays
//In jump search,we jump ahead a fixed number of elements by a step value
//For every m th element in the array we check if the key is lesser than the element or not
//If for a m value , the key is greater then we perform linear search in previous m block of elements
//For example if key is greater than a[(k+1)m],then we check in a[km] to a[(k+1)m] elements
//If element is found,this algorithm returns the index of the element else returns -1
#include<stdio.h>
#include<math.h>

int jumpSearch(int *, int, int, int);

int main()
{
    int arr[10] = {3, 6, 10, 11, 21, 36, 310, 311, 321, 336}, n, step, key, index;
    n = sizeof(arr) / sizeof(arr[0]);
    step = sqrt(n);       //finding the step value
    key = 321;            // search value
    index = jumpSearch(arr, 10, key, step);
    if(index == -1)
        printf("%d not found",key);
    else
        printf("%d found at position %d", key, index);
    return 0;
}

int jumpSearch(int arr[], int size, int key, int step)
{
    int i=0;
    while(arr[i] < key)         //checking for the range of key element in the array
    {
        i += step;              // going ahead of some elements by a step value
        if(i >= size + 1)
            return -1;          // returns -1 if the element range is greater than last element
    }
    i -= step;                  //jumping to the previous block of elements
    for(int j = i; j <= i + step; j++)  //performing linear search for m elements
    {
        if(arr[j] == key)
            return j+1;          //returning the index of element if search element is found
    }
    return -1;                  //returns -1 if the element is not present
}

//The best case time complexity for jump search is O(sqrt(n))
//The worst case time complexity is between O(n) and O(log(n)) i.e., between linear search and binary search
