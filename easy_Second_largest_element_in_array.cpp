/*
QUESTION:-
Given an array Arr of size N, print second largest distinct element from an array.

Example:

Input:
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the
array is 35 and the second largest element
is 34.
*/

/*
APPROACH
-> If the current element is larger than ‘large’ then update second_large and large variables
-> Else if the current element is larger than ‘second_large’ then we update the variable second_large.
-> Once we traverse the entire array, we would find the second largest element in the variable second_large.
*/
//code:
int print2largest(int arr[], int n)
{
    int prev = -1, curr = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > curr)
        {
            prev = curr;
            curr = arr[i];
        }
        else if (arr[i] > prev && arr[i] != curr)
            prev = arr[i];
    }
    return prev;
}

// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(0)
//method 2:
sort(nums.begin(), nums.end());  // Sort the array

    int n = nums.size();
    int largest = nums[n - 1];
    int second_largest = -1;

    // Traverse from end to find the first smaller distinct element
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] != largest) {
            second_largest = nums[i];
            break;
        }
    }

    if (second_largest == -1)
        cout << "No second largest element";
    else
        cout << second_largest;

    return 0;
