#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> v;
        for (int i = 0; i < 4; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        set<ll> s;
        for (int i = 0; i < 4; i++)
            s.insert(v[i]);
        ll n = s.size();
        if (n == 4 || n == 3)
            cout << 2 << endl;
        else if (n == 2)
        {
            sort(v.begin(), v.end());
            ll count{0};
            for (int i = 0; i < 4; i++)
            {
                if (v[0] == v[i])
                    count++;
            }

            if (count == 2)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}
