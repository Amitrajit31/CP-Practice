#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void dectobin(vector<ll> &zerovec, ll n);

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, i, j;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<ll> zerovec(32, 0);
        for (i = 0; i < n; i++)
        {
            dectobin(zerovec, arr[i]);
        }
        ll res = 0;
        for (i = 0; i < 32; i++)
        {
            if (zerovec[i] == 0)
            {
                continue;
            }

            else if (zerovec[i] % k == 0)
            {
                res += (zerovec[i] / k);
            }
            else
            {
                res += (zerovec[i] / k + 1);
            }
        }
        cout << res << endl;
    }

    return 0;
}

void dectobin(vector<ll> &zerovec, ll n)
{
    string str = "";
    ll i, j = 31;
    while (n > 0)
    {
        str += to_string(n % 2);
        n /= 2;
    }
    ll length = str.size();
    for (i = 0; i < length; i++)
    {
        if (str[i] == '1')
        {
            zerovec[j] += 1;
        }

        j--;
    }
}
