#include <stdio.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
const int N = 1e6;
typedef long long int ll;
ll arr[N], b[N], c[N];

ll findGCD(ll arr[], ll n)
{
    ll result = arr[0];
    for (ll i = 1; i < n; i++)
    {
        result = __gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}

int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, res = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        ll max = *max_element(arr, arr + n);
        ll gcd = findGCD(arr, n);
        ll min = *min_element(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == max)
            {
                arr[i] = gcd;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            res = res + (arr[i] / gcd);
        }

        cout << res << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
typedef long long int ll;
ll arr[N], b[N], c[N];

void findGCD(ll n);

int main()
{
    ll t, i;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0, res = 0;
        cin >> n;
        for (i = 1; i < n + 1; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n + 1);
        findGCD(n);
        for (i = 1; i < n + 1; i++)
        {
            sum += arr[i];
        }
        ll min = LLONG_MAX;
        for (i = 1; i < n + 1; i++)
        {
            res = (sum - arr[i] + __gcd(b[i - 1], c[i + 1])) / __gcd(b[i - 1], c[i + 1]);
            if (res < min)
                min = res;
        }
        cout << min << "\n";
    }
    return 0;
}

void findGCD(ll n)
{
    b[1] = arr[1];
    c[n] = arr[n];
    for (ll i = n - 1; i > 0; i--)
    {
        c[i] = __gcd(c[i + 1], arr[i]);
    }
    for (ll i = 2; i < n + 1; i++)
    {
        b[i] = __gcd(b[i - 1], arr[i]);
    }
}
