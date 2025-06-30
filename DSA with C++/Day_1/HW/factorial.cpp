#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n, res = 1, i = 2;
    cin >> n;
    while (i <= n)
    {
        res *= i;
        i += 1;
    }
    cout << res;
}