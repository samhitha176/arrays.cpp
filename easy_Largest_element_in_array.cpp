/*
QUESTION:-
Given an array A[] of size n. The task is to find the largest element in it.

Example:

Input:
n = 5
A[] = {1, 8, 7, 56, 90}
Output:
90
Explanation:
The largest element of given array is 90
*/

/*
APPROACH:-
-> Intialize the maxi with starting element
-> Traverse the entire array and update the maxi if the element is greater than maxi
-> Finally, return the maxi
*/

// CODE:-


int largest(int arr[], int n)
{
    int maxi=arr[0];
    for(int i=1;i<n;i++) {
      if(arr[i]>maxi) {
        maxi=arr[i];
    }
      return maxi;
    
}
