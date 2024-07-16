class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<int>v;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            else v.push_back(nums[i]);
        }
        v.push_back(nums[nums.size()-1]);
        nums=v;
        int ans = (n-count);
        return ans;
    }
};
