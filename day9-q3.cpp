#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string a,b;
    string result="";
    cin>>a>>b;
    int carry=0;
    int i=0;
    int alen=a.length();
    int blen=b.length();
    while(i<alen||i<blen||carry!=0){
    	int x=0;
    	if(i<alen&&a[alen-1-i]=='1')
    	 x=1;
    	int y=0;
    	if(i<blen&&b[blen-1-i]=='1')
    	 y=1;
    	result=to_string((x+y+carry)%2)+result;
    	carry=(x+y+carry)/2;
    	i++;
	}
    

for(int i=0;i<result.length();i++)
 cout<<result[i];





return 0;
}
