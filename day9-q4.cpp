#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int todigit(char ch){
	return (ch-'0');
}
int main(){
    string a,b;
    string result="";
    cin>>a>>b;
    int carry=0;
    int i=0;
    int alen=a.length();
    int blen=b.length();
    while(i<alen||i<blen||carry!=0){
    	int x=0,y=0;
    	if(i<alen){
         x= todigit(a[alen-i-1]);
    	}
        if(i<blen){
    	 y= todigit(b[blen-i-1]);
        }
        result=to_string((x+y+carry)%10)+result;
    	carry=(x+y+carry)/10;
    	i++;
	}
   cout<<result;
return 0;
}
