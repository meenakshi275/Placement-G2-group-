class Solution {
public:
    string reverseVowels(string s) {
       
        int n=s.length();
        char a[n];
        int j=0;
       
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {    a[j]=s[i];
                  j++;
            }
        }
        reverse(a,a+j);
         int k=0;
         for(int i=0;i<n;i++){
          if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {    s[i]=a[k];
                 k++;
            }
        }
        return s;
    }
};
