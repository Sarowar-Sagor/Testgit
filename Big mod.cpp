// C++ program to Compute (a*b)%c
// such that (a%c) * (b%c) can be
// beyond range
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// returns (a*b)%c
ll mulmod(ll a,ll b,ll c)
{
	// base case if b==0, return 0
	if (b==0)
		return 0;

	// Divide the problem into 2 parts
	ll s = mulmod(a, b/2, c);

	// If b is odd, return
	// (a+(2*a)*((b-1)/2))%c
	if (b%2==1)
		return (a%c+2*(s%c)) % c;

	// If b is odd, return
	// ((2*a)*(b/2))%c
	else
		return (2*(s%c)) % c;
}

// Driver code

int main()
{
	ll a = 10, b = 10;
	ll c = 1000000000000003;
	printf("%lld\n", mulmod(a, b, c));
	return 0;
}
/**int power(int x, unsigned int y, int p)
{
	int res = 1;	 // Initialize result

	x = x % p; // Update x if it is more than or
				// equal to p

	while (y > 0)
	{
		// If y is odd, multiply x with result
		if (y & 1)
			res = (res*x) % p;

		// y must be even now
		y = y>>1; // y = y/2
		x = (x*x) % p;
	}
	return res;
} */
