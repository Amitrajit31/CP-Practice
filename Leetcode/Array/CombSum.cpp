class Solution
{

public:
    void findCombos(int i, int t, vector<int> &a, vector<vector<int>> &res, vector<int> &ds)
    {
        if (i == a.size())
        {
            if (t == 0)
            {
                res.push_back(ds);
            }

            return;
        }

                if (a[i] <= t)
        {
            ds.push_back(a[i]);
            findCombos(i, t - a[i], a, res, ds);
            ds.pop_back();
        }

        findCombos(i + 1, t, a, res, ds);
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> res;
        vector<int> ds;
        findCombos(0, target, candidates, res, ds);

        return res;
    }
};