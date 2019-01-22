//In bubble sort algorithm, we sort the elements by comparing each element with other
//The first element is compared with remaining elements and if it is greater when the elements will be swapped
//So, we have to perform the above comparisons length - 1 times
//After first iteration, greatest element will be at the last position
//After second iteration, the next greatest element will be at length -1 position and soon
#include<stdio.h>
int main()
{
    int arr[8] = {11, 3, 14, 6, 2, 1, 10, 9}, n = 8;// n indicates the size of array
    for(int i = 0; i < n; i++)    // loop for running the comparisons n - 1 times
    {
        for(int j = 0; j < n - i - 1; j++) // loop for comparing each element with other elements
        {
            if(arr[j] > arr[j+1])
            {
                //swapping the elements if j th element is greater than j+1 th element in the array
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);          //printing the sorted array
    }
    return 0;
}
// output -1 2 3 6 9 10 11 14
/*Time complexity:
   Best case: O(n * n)
   Worst case: O(n * n)
*/
