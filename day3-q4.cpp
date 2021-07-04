#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int f;
	cin>>f;
	int v;
	int e[n+1];
	e[0]=f;
	for(int i=0;i<n;i++){
		v=a[i]^e[i];
		e[i+1]=v;
	}
	for(int i=0;i<n+1;i++){
		cout<<e[i]<<" ";
	}
}
