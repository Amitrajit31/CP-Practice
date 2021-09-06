class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        vector<int> v;
        unordered_set<int> s;

        for (int i = 0; i < matrix.size(); i++)
        {
            int minRow = INT_MAX;

            for (int j = 0; j < matrix[i].size(); j++)
            {
                minRow = min(minRow, matrix[i][j]);
            }

            s.insert(minRow);
        }

        for (int j = 0; j < matrix[0].size(); j++)
        {
            int maxCol = INT_MIN;

            for (int i = 0; i < matrix.size(); i++)
            {
                maxCol = max(maxCol, matrix[i][j]);
            }

            if (s.find(maxCol) != s.end())
            {
                v.push_back(maxCol);
            }
        }

        return v;
    }
};