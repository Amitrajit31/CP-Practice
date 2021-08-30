class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int ans = 0;
        int count = 0;

        for (int sum : gain)
        {
            count += sum;
            ans = max(ans, count);
        }

        return ans;
    }
};