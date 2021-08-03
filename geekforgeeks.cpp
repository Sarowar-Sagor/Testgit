// C++ program to print lexicographically
// permutation array by replacing minimum
// element of array
#include <bits/stdc++.h>
using namespace std;

// Function to calculate lexicographically permutation
// in array
void lexicoSmallestPermuatation(int arr[], int n)
{
	// Calculate frequency of array elements
	int cnt[n + 1];
	memset(cnt, 0, sizeof(cnt));
	for (int i = 0; i < n; ++i)
		++cnt[arr[i]];

	int ele = 1, replacement = 0;
	bool vis[n + 1];
	memset(vis, 0, sizeof(vis));
	for (int i = 0; i < n; ++i) {

		// If count of element is 1, no
		// need to replace
		if (cnt[arr[i]] == 1)
			continue;

		// Find the element that has not
		// occurred in array
		while (cnt[ele])
			++ele;

		// If replacement element is greater
		// than current arr[i] then visit
		// that element for next iteration
		if (ele > arr[i] && !vis[arr[i]])
			vis[arr[i]] = 1;

		else {

			// Decrement count and assign the element
			// to array
			--cnt[arr[i]];
			arr[i] = ele;

			// Increment the replacement count
			++replacement;

			// Increment element after assigning
			// to the array
			++ele;
		}
	}
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
}

// Driver code
int main()
{
	int arr[] = {5,4,1,3,2};
	int sz = sizeof(arr) / sizeof(arr[0]);
	lexicoSmallestPermuatation(arr, sz);
	return 0;
}
