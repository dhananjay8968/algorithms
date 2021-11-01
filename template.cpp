#include <bits/stdc++.h>
#define int long long
using namespace std;
const int M = 1e9 + 7;

bool isEven(int n)
{
    return (!(n & 1));
}

bool isPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (n / i != i)
            {
                cnt++;
            }
        }
    }
    return cnt == 2;
}

void solve()
{
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}