class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {

        sort(nums.begin(), nums.end());

        int min_diff = INT_MAX, res = INT_MAX, n = nums.size();

        for (int i = 0; i < n; i++)
        {

            int s = i + 1, e = n - 1;

            while (s < e)
            {
                int sum = nums[i] + nums[s] + nums[e];
                int curr_diff = abs(sum - target);

                if (curr_diff < min_diff)
                {

                    min_diff = curr_diff;
                    res = sum;
                }

                if (sum == target)
                    return target;
                else if (sum < target)
                    s++;
                else
                    e--;
            }
        }

        return res;
    }
};