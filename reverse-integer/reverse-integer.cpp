class Solution {
public:
    int reverse(int x) {
        if(x<INT_MIN || x>INT_MAX){
            return 0;
        }
        long rev=0,rem=0;
        bool flag=x==abs(x);
        x=abs(x);
      while(x>0){
          rem=x%10;
          x/=10;
          rev=rev*10+rem;
          
      }
        if(flag){
            if(rev>INT_MAX){
                return 0;
            }
            return rev;
        }
        else{
            if(-1*rev<INT_MIN){
                return 0;
            }
            return -1*rev;
        }
    }
};