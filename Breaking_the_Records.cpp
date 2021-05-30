#include <bits/stdc++.h>
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
    //     int i, j, n = 0, m = 0, p;

    //     cout << "allaldsadadasfa" << n;
    //     cin >> j;
    //     int scores[i];
    //     for (int i = 0; i < j; i++)
    //     {
    //         cin >> p;
    //         scores[i] = p;
    //     }

    //     int lowestScore = scores[0];
    //     int highestScore = scores[0];

    //     for (int i = 0; i < j; i++)
    //     {
    //         cout << scores[i] << endl;
    //         if (scores[i] < lowestScore)
    //         {
    //             n++;
    //             lowestScore = scores[i];
    //         }
    //         if (scores[i] > highestScore)
    //         {
    //             m++;
    //             highestScore = scores[i];
    //         }
    //     }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // solve();

    int i, j, n = 0, m = 0, p;
    cin >> j;
    int scores[j];
    for (int i = 0; i < j; i++)
    {
        cin >> p;
        scores[i] = p;
    }

    int lowestScore = scores[0];
    int highestScore = scores[0];

    for (int i = 0; i < j; i++)
    {
        if (scores[i] < lowestScore)
        {
            n++;
            lowestScore = scores[i];
        }
        if (scores[i] > highestScore)
        {
            m++;
            highestScore = scores[i];
        }
    }
    cout<<m<<" "<<n;
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