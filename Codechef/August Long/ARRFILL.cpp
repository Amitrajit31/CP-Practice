// using maps

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        map<int, int, greater<int>> mymap;
        for (int i = 0; i < m; i++)
        {
            ll x, y;
            cin >> x >> y;
            mymap.insert(make_pair(x, y));
        }

        ll lcm = 1;
        ll rem = n;
        ll ans = 0;

        map<int, int, greater<int>>::iterator itr;

        for (auto itr = mymap.begin(); itr != mymap.end() && rem > 0; ++itr)
        {
            ll a = itr->first, b = itr->second;
            lcm = lcm * b / __gcd(lcm, b);
            ans += (rem - n / lcm) * a;
            rem = n / lcm;
        }

        cout << ans << endl;
    }
    return 0;
}

//using vectors

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<pair<int, int>> v;
        for (int i = 0; i < m; i++)
        {
            ll x, y;
            cin >> x >> y;
            v.push_back(make_pair(x, y));
        }

        sort(v.begin(), v.end(), greater<pair<int, int>>());

        ll lcm = 1;
        ll rem = n;
        ll ans = 0;

        vector<pair<int, int>>::iterator itr;

        for (auto itr = v.begin(); itr != v.end() && rem > 0; ++itr)
        {
            ll a = itr->first, b = itr->second;
            lcm = lcm * b / __gcd(lcm, b);
            ans += (rem - n / lcm) * a;
            rem = n / lcm;
        }

        cout << ans << endl;
    }
    return 0;
}