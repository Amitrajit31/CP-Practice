class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {

        int currSum{0}, count{0};
        unordered_map<int, int> m;
        m[0] = 1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {

            currSum += nums[i];

            if (m[currSum - k])
                count += m[currSum - k];

            m[currSum]++;
        }

        return count;
    }
};