#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    int i = 2;
    if (i >= 2)

        while (i <= n - 1)
        {
            if (n % i == 0)
            {
                cout << "Non-prime";
                break;
            }
            else
            {
                i += 1;
            }
        }
    cout << "Prime";
}