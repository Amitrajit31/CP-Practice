#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int g, c;
        cin >> g >> c;

        int height = (c * c) / (2 * g);

        cout << height << endl;
    }
    return 0;
}
