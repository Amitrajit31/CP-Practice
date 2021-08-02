#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int w[n];
        int l[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }

        map<int, pair<int, int>> frog;
        for (int i = 0; i < n; i++)
        {
            frog[w[i]] = {l[i],i};
        }

        int res = 0;
        int pos;
        for (auto it=frog.begin(); it!=frog.end(); it++)
        {
            int flag = (it->second).second;
            if(it==frog.begin())
            {
                pos = flag;
            } else {
               while (pos>=flag)
               {
                   res++;
                   flag+= (it->second).first;
               }
               pos = flag;
            }
        }
        
        cout << res << endl;
    }
    return 0;
}
