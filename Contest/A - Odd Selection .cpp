#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    for (int l = 0; l < t; l++)
    {
        int x, n;
        cin >> n >> x;
        int a[n];
        string result = "No";
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (x == 1 && odd > 0)
        {
            result = "Yes";
        }
        else if (n == x)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum = sum + a[i];
            }
            if (sum % 2 != 0)
            {
                result = "Yes";
            }
            else
            {
                result = "No";
            }
        }
        else if ((even == 0 && x % 2 == 0) || odd == 0)
        {
            result = "No";
        }
        else
        {
            result = "Yes";
        }
        cout << result << "\n";
    }
    return 0;
}