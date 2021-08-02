class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {

            int target = -nums[i];
            int start = i + 1, end = n - 1;
            while (start < end)
            {

                if (nums[start] + nums[end] == target)
                {
                    v.push_back({nums[i], nums[start], nums[end]});
                    while (start < end && nums[start] == nums[start + 1])
                        start++;
                    while (start < end && nums[end] == nums[end - 1])
                        end--;
                    start++;
                    end--;
                }
                else if (nums[start] + nums[end] > target)
                    end--;
                else
                    start++;
            }
            while (i + 1 < n && nums[i + 1] == nums[i])
                i++;
        }

        return v;
    }
};