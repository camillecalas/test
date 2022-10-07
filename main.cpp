
#include <bits/stdc++.h>
using namespace std;
 
// Function to return the first missing positive number from
// the given unsorted array
int firstMissingPos(int A[], int n)
{
	// NAIVE METHOD
	// int i = 0;
	// int	x;
	// int j = 1;
	// while (i < n)
	// {
	// 	x = 0;
	// 	while (x < n)
	// 	{
	// 		if (j == A[x])
	// 			j++;
	// 		x++;
	// 	}
	// 	i++;
	// }
	// return (j);

	// USE SORTING + LINEAR SEARCH
	// int	i = 0;
	// int	temp;
	// int j;

	// while (i < n)
	// {
	// 	j = 0;
	// 	while (j < n)
	// 	{
	// 		if (A[i] > A[j])
	// 		{
	// 			temp = A[i];
	// 			A[i] = A[j];
	// 			A[j] = temp;
	// 		}
	// 		j++;
	// 	}
	// 	i++;
	// }
	// int x = 1;
	// i = 0;
	// while (i < n)
	// {
	// 	j = 0;
	// 	while (j < n)
	// 	{
	// 		if (x == A[j])
	// 			x++;
	// 		j++;
	// 	}
	// 	i++;
	// }
	// cout << endl ;
	// return (x);


    // To mark the occurrence of elements
    // bool present[n + 1] = { false };
 
    // // Mark the occurrences
    // for (int i = 0; i < n; i++) {
 
    //     // Only mark the required elements
    //     // All non-positive elements and the elements
    //     // greater n + 1 will never be the answer
    //     // For example, the array will be {1, 2, 3} in the
    //     // worst case and the result will be 4 which is n + 1
    //     cout << "A[i] = " <<A[i] << endl;
	// 	if (A[i] > 0 && A[i] <= n)
	// 	{
	// 		cout << "A[i] = "<< A[i] << " true" << endl;
    //         present[A[i]] = true;

	// 	}
    // }
 
    // // Find the first element which didn't appear in the
    // // original array
    // for (int i = 1; i <= n; i++)
	// {
    //     if (!present[i])
    //         return i;
	// }
 
    // // If the original array was of the type {1, 2, 3} in
    // // its sorted form
    // return n + 1;
}
 
// Driver code
int main()
{

 
    // int A[] = { 0, 10, 2, -10, -20 };
	
	int	A[] = { 2, 3, -7, 6, 8, 1, -10, 15 };
	// int	A[] = { 1, 2, 3 };
	// int A[] = { 1, 3, 6, 4, 1, 2 };
    int size = sizeof(A) / sizeof(A[0]);
    cout  << firstMissingPos(A, size);
}