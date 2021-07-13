class Solution {
public:
    vector<string> findWords(vector<string>& words) {
      unordered_map<char,int> map;
      vector<string> v={"qwertyuiop","asdfghjkl","zxcvbnm"};
        for(int i=0;i<3;i++){
            for(char j:v[i]){
                map[j]=i+1;
            }
        }
        v={};
        for(string i:words){
            int n=map[tolower(i[0])];
            bool flag=true;
            for(int j=1;j<i.size();j++){
                if(map[tolower(i[j])]!=n){
                    flag=false;
                    break;
                }
            }
            if(flag)
                v.push_back(i);
            
        }
        return v;
    }
};
