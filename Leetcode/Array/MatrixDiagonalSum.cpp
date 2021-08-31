class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int sum = 0;
        int ans;
        int n = mat.size();

        for (int i = 0; i < n; i++)
        {
            sum += mat[i][i] + mat[i][n - i - 1];

            if (n % 2 == 1)
            {
                ans = sum - mat[n / 2][n / 2];
            }
            else
            {
                ans = sum;
            }
        }

        return ans;
    }
};