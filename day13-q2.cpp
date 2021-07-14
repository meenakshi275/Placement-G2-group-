class Solution {
public:
    int hammingweight(uint32_t n){
        int ans=0;
        while(n){
            n=n&(n-1);
            ans++;
            
        }
        return ans;
    }
    
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        int value=hammingweight(n-1);
       if(value%2==0)
           return (n&n-1)==0;
        else
            return false;

    }   
};
