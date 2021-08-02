class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {

        vector<int> ans;
        int zero{0}, prod{1};

        for (auto i : nums)
        {
            if (i == 0)
                zero++;
            else
                prod *= i;
        }

        for (auto i : nums)
        {
            if (i == 0)
            {
                if (zero != 1)
                    ans.push_back(0);
                else
                    ans.push_back(prod);
            }
            else
            {
                if (zero == 0)
                    ans.push_back(prod / i);
                else
                    ans.push_back(0);
            }
        }

        return ans;
    }
};