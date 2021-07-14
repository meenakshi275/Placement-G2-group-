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
    vector<int> countBits(int n) {
      vector<int> ans;
      for(int i=0;i<=n;i++){
          int data=hammingweight(i);
          ans.push_back(data);
      }
        return ans;
    }
};
