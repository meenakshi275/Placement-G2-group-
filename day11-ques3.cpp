class Solution {
public:
    vector<int> shortestToChar(string s, char ch) {
     
        vector<int> vec;
        vector<int> ar(s.size());
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==ch )
                vec.push_back(i);
        }
    
    for(int i=0;i<s.size();i++){
        int z=s.size();
        for(int j=0;j<vec.size();j++)
        {
            z=min(z,abs(i-vec[j]));
        }
        ar[i]=z;
    }
    return ar;
}
};
