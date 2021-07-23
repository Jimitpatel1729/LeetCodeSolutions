class Solution {
public:
    void findSubSets(int id,vector<int> &nums,vector<int> &ds, vector<vector<int>> &ans){
        ans.push_back(ds);
        for(int i=id;i<nums.size();i++){
            if(i!=id && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            findSubSets(i+1,nums,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        findSubSets(0,nums,ds,ans);
        return ans;
    }
    
};