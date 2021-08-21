class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> v(n + 1);
        int rep = 0;
        for (int i = 0; i < n; i++)
        {
            v[nums[i]]++;
            if (v[nums[i]] > 1)
            {
                rep = nums[i];
                break;
            }
        }

        return rep;
    }
};