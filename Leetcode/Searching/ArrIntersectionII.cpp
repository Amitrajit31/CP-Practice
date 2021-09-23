class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {

        map<int, int> m;
        vector<int> res;

        for (int x : nums1)
        {
            m[x]++;
        }

        for (int y : nums2)
        {
            if (m[y] > 0)
            {
                m[y]--;
                res.push_back(y);
            }
        }

        return res;
    }
};