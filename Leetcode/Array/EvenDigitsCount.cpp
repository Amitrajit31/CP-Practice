class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;

        for (auto &n : nums)
        {
            int count = 0;

            while (n != 0)
            {
                n = n / 10;
                count++;
            }

            if (count % 2 == 0)
            {
                ans++;
            }
        }

        return ans;
    }
};