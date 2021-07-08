#include<bits/stdc++.h>
using namespace std;

string common(string a1,string a2)
{   string res;
  
	int n=a1.length(),m=a2.length(); 
    
	for(int i=0,j=0;i<n,j<m;i++,j++){
	
	      if(a1[i]!=a2[i])	
		    break;
		  res.push_back(a1[i]);	
    }
    
return res;
}
string largestcommonprefix(string a[],int n){
    string prefix=a[0];
	for(int i=1;i<=n-1;i++){
		prefix=common(prefix,a[i]);
	}
	return prefix;
}
int main(){
	int n;
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	string ans=largestcommonprefix(a,n);

	for(int i=0;i<ans.length();i++)
	 cout<<ans[i];
return 0;	  

}
