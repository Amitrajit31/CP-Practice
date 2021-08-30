class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int j;
        if (ruleKey == "type")
            j = 0;
        else if (ruleKey == "color")
            j = 1;
        else if (ruleKey == "name")
            j = 2;
        else
            j = -1;
        int count = 0, i;
        if (j != -1)
        {
            for (i = 0; i < items.size(); i++)
            {
                if (items[i][j] == ruleValue)
                    count++;
            }
        }

        return count;
    }
};