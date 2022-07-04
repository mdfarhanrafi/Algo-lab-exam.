
#include <bits/stdc++.h>
#define pi (3.141592653589)
#define mod 1000000007
#define ll long long
#define dd double
#define pb push_back
#define mp make_pair
#define ff first
#define se second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define sp ' ' 
#define nl endl 
#define vi vector<int> 
#define vs vector<string> 
#define mai map<ll,int> 
#define mas map<string ,int> 
#define ss  string 
using namespace std;
int MatrixChainOrder(int p[], int n)
{
	int m[n][n];
	int i, j, k, L, q;
	for (i = 1; i < n; i++)m[i][i] = 0;

	// L is chain length.
	for (L = 2; L < n; L++){
		for (i = 1; i < n - L + 1; i++){
			j = i + L - 1;
			m[i][j] = INT_MAX;
			for (k = i; k <= j - 1; k++){
				// q = cost/scalar multiplications
				q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
				if (q < m[i][j])
					m[i][j] = q;
			}
		}
	}

	return m[2][5];
}
int main()
{
	int arr[] = { 30, 35,15,5,10,20,25 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Minimum number of multiplications is "<< MatrixChainOrder(arr, size);

	getchar();
	return 0;
}