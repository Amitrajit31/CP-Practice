class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        int n = nums.size();
        signed int max_so_far = INT_MIN, currMax = 0;

        for (int i = 0; i < n; i++)
        {
            currMax += nums[i];
            max_so_far = max(currMax, max_so_far);
            if (currMax < 0)
                currMax = 0;
        }

        return max_so_far;
    }
};