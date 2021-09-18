class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        long long int s = 0, e = nums.size() - 1;

        while (s <= e)
        {
            long long int m = s + (e - s) / 2;

            if (m % 2 == 0 && nums[m] == nums[m + 1] || m % 2 == 1 && nums[m] == nums[m - 1])
            {
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
        }

        return nums[s];
    }
};