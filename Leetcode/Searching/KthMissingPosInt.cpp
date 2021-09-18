class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int n = arr.size();
        int start = 0, end = n - 1;
        int missingCount = arr[n - 1] - n;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            missingCount = arr[mid] - arr[mid + 1];

            if (missingCount <= k)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return arr[end] + k - (arr[end] - (end + 1));
    }
};