#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,e;
	cin>>n>>e;
	int a[n],a2[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
	  a2[i]=a[i];
	}
	sort(a2,a2+n);
	int h=a2[n-1];
	string v;
    
	for(int i=0;i<n;i++){
		if(a[i]+e>=h){
		 v="true"; 	
		}
		else
		 v="false";
		
		cout<<v<<",";
	}
	
}
