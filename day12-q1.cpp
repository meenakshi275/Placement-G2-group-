#include<bits/stdc++.h>
using namespace std;
int todigit(char ch)
 {
 	return (ch - '0');
 }
int main(){
	cout<<"Enter base";
	int x;
	cin>>x;
	string s;
	cin>>s;
	string in=s.substr(0,s.find('.'));
	string f=s.substr(s.find('.')+1);
	float sum1=0,sum2=0;
	int k=0;
	for(int i=0;i<in.length();i++)
	{
		int v=todigit(in[i]);
		sum1=sum1+(v*pow(x,in.length()-i-1));
	}
	for(int i=1;i<=f.length();i++)
	{   int v=todigit(f[i-1]);
		sum2=sum2+(v*pow(x,-i));
	}
    cout<<sum1+sum2;

}
