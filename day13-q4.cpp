class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for(int i=0;i<12;i++)
        {
            bitset<4> hours(i);
            for(int j=0;j<60;j++)
            {
                bitset<6> min(j);
                if(hours.count()+min.count()==turnedOn){
                    string n=to_string(i);
                    string m=(j<10)?":0":":";
                    m=m+to_string(j);
                    ans.push_back(n+m);
                }
            }
        }
        return ans;
    }
};
