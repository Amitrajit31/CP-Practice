#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    for (int i = 10; i > 0; i--) {
        if (n%i==0)
        {
            cout << i;
            break;
        }
           
    }
        return 0;
}
