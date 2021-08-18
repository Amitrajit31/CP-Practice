class Solution
{
public:
    int numPairsDivisibleBy60(vector<int> &time)
    {
        vector<int> m(60);
        int ans = 0;
        for (int t : time)
        {
            ans += m[(600 - t) % 60];
            m[t % 60]++;
        }
        return ans;
    }
};