class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) {
        string ans;
        int i=0,j,temp=0;
        unordered_map<string, int> map;
        while(i< p.size()){
            string ans="";
            while(i<p.size() && isalpha(p[i])){
                ans += tolower(p[i]);
                i++;
            }
            if(ans!=""){
                map[ans]++;
            }
            i++;
        }
        for(j=0;j<b.size();j++)
            map.erase(b[j]);
        for(auto it : map){
            if(temp< it.second){
                ans=it.first;
                temp=it.second;
            }
        }
        return ans;
    }
};
