#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    int count = 1, sum = 0;
    while (count <= n)
    {
        sum = sum + count;
        count = count + 1;
    }
    cout << sum;
}