class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
   set<int> s;
        if(nums.size()==0) return 0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int i=0;
        for(auto it:s){
            nums[i++]=it;
            
        }
        return s.size();
    }
};