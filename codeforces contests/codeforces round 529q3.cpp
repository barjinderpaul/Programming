#include<stdio.h> 
  
/* Returns true if the there is a subarray of arr[] with sum equal to 'sum' 
   otherwise returns false.  Also, prints the result */
int subArraySum(int arr[], int n, int sum) 
{ 
    int curr_sum, i, j; 
  
    // Pick a starting point 
    for (i = 0; i < n; i++) 
    { 
        curr_sum = arr[i]; 
  
        // try all subarrays starting with 'i' 
        for (j = i+1; j <= n; j++) 
        { 
            if (curr_sum == sum) 
            { 
                printf ("Sum found between indexes %d and %d", i, j-1); 
                return 1; 
            } 
            if (curr_sum > sum || j == n) 
                break; 
           curr_sum = curr_sum + arr[j]; 
        } 
    } 
  
    printf("No subarray found"); 
    return 0; 
} 
  
// Driver program to test above function 
int main() 
{ 
    int arr[] = {1,2,4,8}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 9; 
    subArraySum(arr, n, sum); 
    return 0; 
} 
