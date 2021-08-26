class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int n = nums.size();
        int b = 0, e = 0, far = 0, j = 0;

        for (int i = 0; i < n - 1; i++)
        {
            far = max(far, i + nums[i]);

            if (i == e)
            {
                j++;
                e = far;
            }
        }

        return j;
    }
};