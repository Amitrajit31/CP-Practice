#include <iostream>
using namespace std;

void solve() {
	// your code goes here
    string pv,pt;
    cin >> pv >> pt;
    long long int n;
    cin >> n;
    if(pt == "PM")
    {
        if (pv[0] == '1' && pv[1] == '2')
        {
            
        } else {
            int temp = int(pv[0] - 48);
            temp *= 10;
            temp += int(pv[1] - 48);
            temp += 12;
            int rem = temp % 10;
            pv[1] = char(rem + 48);
            pv[0] = char(int(temp/10) + 48);
        }
        
    }

    else {
        if (pv[0] == '1' && pv[1] == '2')
        {
            int temp = int(pv[0] - 48);
            temp *= 10;
            temp += int(pv[1] - 48);
            temp -= 12;
            int rem = temp % 10;
            pv[1] = char(rem + 48);
            pv[0] = char(int(temp / 10) + 48);
        }
    }

    string a,b,c,d;

    for (long long int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        if (b == "PM")
        {
            if (a[0] == '1' && a[1] == '2')
            {
                
            } else {
                int temp = int(a[0] - 48);
                temp *= 10;
                temp += int(a[1] - 48);
                temp += 12;
                int rem = temp % 10;
                a[1] = char(rem + 48);
                a[0] = char(int(temp / 10) + 48);
            }

        }
            
            else {

                if (c[0] == '1' && c[1] == '2')
                {
                    int temp = int(c[0] - 48);
                    temp *= 10;
                    temp += int(c[1] - 48);
                    temp -= 12;
                    int rem = temp % 10;
                    c[1] = char(rem + 48);
                    c[0] = char(int(temp / 10) + 48);
                }
            }

            if (pv >= a && pv <= c)
            {
                cout << "1";
            }

            else {
                cout << "0";
            }
            
        }
        
        cout << "\n";

    }

    int main()
    {
        long long int t;
        cin >> t;
        while (t--) {
            solve();
        }
    }
    
