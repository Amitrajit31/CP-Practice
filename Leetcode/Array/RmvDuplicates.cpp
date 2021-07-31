class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==0){
            return n;
        }
        
        int j = 1;
        int k = 1;
        
        for(int i = 1; i < n; i++){
            if(nums[i]!=nums[i-1]){
                nums[j++] = nums[i];
                k++;
            }
        }
        
        return k;
        
    }

};
