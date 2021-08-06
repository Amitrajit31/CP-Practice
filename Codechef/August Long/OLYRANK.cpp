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
        ll g1, s1, b1, g2, s2, b2;
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
        if (g1 + s1 + b1 > g2 + s2 + b2)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}
