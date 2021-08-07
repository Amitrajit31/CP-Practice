#include <iostream>
using namespace std;
typedef long long int ll;

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, p, k, res{0};
        cin >> n >> p >> k;

        ll q = p % k;
        q--;

        ll s = ((n - 1) / k) * k;
        s = n - 1 - s;

        if (q > s)
        {
            res += (s + 1) * ((n - 1) / k + 1) + (q - s) * ((n - 1) / k);
        }
        else
        {
            res += ((n - 1) / k + 1) * (q + 1);
        }

        for (int i = q + 1; i <= n - 1; i += k)
        {
            res++;
            if (i == p)
                cout << res << endl;
        }
    }
    return 0;
}
