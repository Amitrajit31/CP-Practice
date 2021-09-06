class Solution
{
public:
    vector<int> sumZero(int n)
    {
        vector<int> v;
        int a = -1;
        for (int i = 1; i <= n / 2; i++)
        {
            v.push_back(a--);
        }
        if (n % 2 != 0)
        {
            v.push_back(0);
        }
        a = 1;
        for (int i = 1; i <= n / 2; i++)
        {
            v.push_back(a++);
        }
        return v;
    }
};