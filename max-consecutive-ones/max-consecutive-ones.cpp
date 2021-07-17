class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0,maxSum=0,temp=0,len=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==1){
               sum+=1;
               maxSum=max(sum,maxSum);
           }
            if(nums[i]==0){
                sum=0;
            }
            
        }
        return maxSum;
    }
};