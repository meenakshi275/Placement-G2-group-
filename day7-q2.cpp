#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n][m],a2[n];
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cin>>a[i][j];
	}
}
int k;
cin>>k;

for(int i=0;i<n;i++){
	int sum=0;
	for(int j=0;j<m;j++){
	sum=sum+a[i][j];	
	}
	a2[i]=sum;
}

int a3[n];
for(int i=0;i<n;i++){
	a3[i]=a2[i];
}
sort(a3,a3+n);

for(int i=0;i<n;i++){
	for(int j=0;j<n;j++)
	{
	if(a3[i]==a2[j])
	  a2[i]=j;
	   
}
}
for(int i=0;i<k;i++){
	cout<<a2[i]<<" ";
}



}
