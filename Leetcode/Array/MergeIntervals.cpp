class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        vector<vector<int>> v;
        sort(intervals.begin(), intervals.end());

        for (int i = 0; i < intervals.size(); i++)
        {

            int first = intervals[i][0];
            int second = intervals[i][1];

            while (i < intervals.size() - 1 && second >= intervals[i + 1][0])
            {

                second = max(second, intervals[i + 1][1]);
                i++;
            }

            v.push_back({first, second});
        }

        return v;
    }
};