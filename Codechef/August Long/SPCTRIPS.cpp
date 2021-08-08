#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, count{0};
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (j % i == 0)
                {
                    for (int k = i; k <= n; k += j)
                    {
                        if (k % j == i)
                        {
                            count++;
                        }
                    }
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}
