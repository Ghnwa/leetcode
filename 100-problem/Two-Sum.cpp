class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = (int)nums.size();
        int cur_sum = 0;
        for(int i=0;i<n;++i){
            cur_sum=nums[i];
            for(int j=i+1;j<n;++j){
                cur_sum+=nums[j];
                if(cur_sum==target)return {i,j};
                cur_sum-=nums[j];
            }
        }
        return {};
    }
};
