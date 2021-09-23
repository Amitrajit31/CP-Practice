class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums2.begin(), nums2.end());
        set<int> s;
        vector<int> res;

        for (int i : nums1)
        {
            if (binarySearch(nums2, i))
            {
                s.insert(i);
            }
        }

        for (int x : s)
        {
            res.push_back(x);
        }

        return res;
    }

    bool binarySearch(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                return true;
            }
            if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return false;
    }
};