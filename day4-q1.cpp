#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b=0;
	for(int i=0;i<n;i++){
		b |=a[i];
	}
	int ans=b*pow(2,n-1);
	cout<<ans;
}
