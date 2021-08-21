class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n-3; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1; j<n-2; j++){
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                
                int start = j+1, end = n-1;
                while(start<end){
                    long long sum = (long long)nums[i] + nums[j] + nums[start] + nums[end];
                    if(sum == target){
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[start]);
                        t.push_back(nums[end]);
                        ans.insert(t);
                        start++;
                    } else if(sum < target) start++;
                    else end--;
                }
            }
        }
        
        vector<vector<int>> res;
        for(auto it : ans){
            res.push_back(it);
        }
        
        return res;
    }
};
