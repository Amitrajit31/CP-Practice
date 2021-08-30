class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        for (int i = 0; i < image.size(); i++)
        {
            int low = 0, high = image.size() - 1;

            while (low <= high)
            {
                if (image[i][low] == image[i][high])
                {
                    image[i][low] = 1 - image[i][low];
                    image[i][high] = image[i][low];
                }

                low++;
                high--;
            }
        }

        return image;
    }
};