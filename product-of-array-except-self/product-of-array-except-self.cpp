class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz=nums.size();
        vector<int> prefLeft(sz);
        vector<int> prefRight(sz);
        vector<int> res(sz);
        prefLeft[0]=1;
        prefRight[sz-1]=1;
        int prod=1;
        for(int i=1;i<sz;i++)
            prefLeft[i]=prefLeft[i-1]*nums[i-1];
        for(int i=sz-2;i>=0;i--)
            prefRight[i]=prefRight[i+1]*nums[i+1];
        for(int i=0;i<sz;i++)
            res[i]=prefLeft[i]*prefRight[i];
        return res;
            
    }
};