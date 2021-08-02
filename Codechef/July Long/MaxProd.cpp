#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int d, x, y, z;
        cin >> d >> x >> y >> z;

        int way1 = x * 7;
        int way2 = (y * d) + (z * (7 - d));

        int maxwork = max(way1, way2);

        cout << maxwork << endl;
    }
    return 0;
}
