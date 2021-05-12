#include <bits/stdc++.h>
#include<vector>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d", x)
#define pl(x) printf("%lld", x)
#define ps(s) printf("%s", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
void solve()
{
        int numberOfArrays, querries;
    
    cin >> numberOfArrays >> querries;
    
    vector<vector<int>> array(numberOfArrays);
    
    for (int i = 0; i < numberOfArrays; i++) {
        int lengthOfArray;
		cin >> lengthOfArray;

		array[i].resize(lengthOfArray);
		for (int j = 0; j < lengthOfArray; j++)
			cin >> array[i][j];
    }
    
    for (int i = 0; i < querries; i++) {
        int n, m;
        cin >> n >> m;
        cout << array[n][m] << endl;
    }
    // int querries, numOfArrays, n, m;

    // cin >> numOfArrays >> querries;
    // deb(numOfArrays);
    // deb(querries);
    // vector<vector<int>> arrayOfIntegers;
    // for (int i = 0; i < numOfArrays; i++)
    // {
    //     deb(i);
    //     int k;
    //     cin >> k;
	// 	arrayOfIntegers[i].resize(k);
    //     for (int j = 0; j < k; k++)
    //     {
    //         int p;

    //         cin >> p;
    //         arrayOfIntegers[i][j] = p;
    //         deb(j);
    //     }
    // }
    // for (int i = 0; i < querries; i++)
    // {
    //     cin >> n >> m;
    //     deb(n);
    //     deb(m);
    //     cout << arrayOfIntegers[n][m] << endl;
    // }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
int pow(int base, int exp)
{
    int mod = 10;
    base %= mod;
    int result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
};