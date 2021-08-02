#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
#define mod 1000000007

ll chefora(ll num)
{
    ll plndr = num;
    ll ret = 0;
    if (num < 10)
    {
        ret = plndr;
    }
    else if (num >= 10)
    {
        num /= 10;
        while (num != 0)
        {
            plndr = plndr * 10 + num % 10;
            num /= 10;
        }

        ret = plndr;
    }

    return ret;
}

ll calcPow(ll base, ll power)
{

    ll ans = 1;
    while (power != 0)
    {
        if (power % 2 == 0)
        {
            base = ((base % mod) * (base % mod)) % mod;
            power = floor(power / 2);
        }
        else
        {
            ans = ((ans % mod) * (base % mod)) % mod;
            power = power - 1;
        }
    }

    return ans;
}

int main()
{
    ll arr1[100001] = {0};
    ll arr2[100001] = {0};
    ll x;
    cin >> x;

    for (ll i = 1; i <= 100001; i++)
    {
        arr1[i] = chefora(i);
        arr2[i] = arr2[i - 1] + arr1[i];
    }

    while (x--)
    {
        ll l, r;
        cin >> l >> r;
        ll pow = arr2[r] - arr2[l];
        cout << calcPow(arr1[l], pow) << endl;
    }

    return 0;
}
