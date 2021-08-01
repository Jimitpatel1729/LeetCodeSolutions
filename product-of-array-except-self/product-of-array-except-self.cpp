class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int sz=nums.size();
        int product=1;
        int cntzero=0;
        int productzero=1;
        for(int i=0;i<sz;i++){
            product*=nums[i];
            if(nums[i]==0){
                cntzero++;
            }
            else{
                productzero*=nums[i];
            }
        }
        vector<int> answer(sz);
        if(product !=0){
            for(int i=0;i<sz;i++){
                answer[i]=product/nums[i];
            }
        }
        else if(cntzero ==1){
            for(int i=0;i<sz;i++){
                if(nums[i]==0){
                    answer[i]=productzero;
                }
            }
        }
        else{
            
        }
         return answer;   
    }
};