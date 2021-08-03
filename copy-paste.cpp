// C++ code to print all
// divisors of N*N using N

#include <bits/stdc++.h>
using namespace std;

// Fuction to find Divisor of N
void DivisorOfN(vector<int>& v,
				map<int, bool>& marked,
				int n)
{
	// sqrt(N) approach
	// to find divisors of N
	for (int i = 1; i <= sqrt(n); i++) {

		if (n % i == 0) {
			if (n / i == i) {
				v.push_back(i);
				marked[i] = true;
			}
			else {
				v.push_back(i);
				v.push_back(n / i);
				marked[i] = true;
				marked[n / i] = true;
			}
		}
	}
}

// Fuction to print all divisor of N*N
void PrintDivisors(int n)
{
	// Vector v to store divisors of n
	vector<int> v;

	// Map to avoid repeated divisors
	map<int, bool> marked;

	// Store all divisor of n
	DivisorOfN(v, marked, n);

	int size = v.size();

	// Iterating over vector v
	// to generate divisors of N*N
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			int check = v[i] * v[j];

			// Checking if element is
			// already present
			if (marked[check] != true) {
				v.push_back(v[i] * v[j]);

				// marking element true
				// after adding in vector
				marked[v[i] * v[j]] = true;
			}
		}
	}

	sort(v.begin(), v.end());

	printf("Divisors of %d are: ", n * n);
	for (int i = 0; i < v.size(); i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}

// Driver Code
int main()
{
	PrintDivisors(4);
	PrintDivisors(8);
	PrintDivisors(10);

	return 0;
}
