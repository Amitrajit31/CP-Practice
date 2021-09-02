class Solution
{
public:
    int maximumPopulation(vector<vector<int>> &logs)
    {
        vector<int> v(100, 0);

        for (auto &it : logs)
        {
            for (int i = it[0]; i < it[1]; i++)
            {
                v[i - 1950]++;
            }
        }

        int maxAlive = 0, maxYear = 0;

        for (int i = 0; i < 100; i++)
        {
            if (v[i] > maxAlive)
            {
                maxAlive = v[i];
                maxYear = i;
            }
        }

        return maxYear + 1950;
    }
};