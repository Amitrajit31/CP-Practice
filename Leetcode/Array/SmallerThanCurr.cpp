class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> res;
        int i = 0, n = nums.size();
        while (i < n)
        {
            int count = 0, j = 0;
            while (j < n)
            {
                if (j != i && nums[i] > nums[j])
                {
                    count++;
                }
                j++;
            }
            res.push_back(count);
            i++;
        }
        return res;
    }
};