#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int mid=n/2;
	
	int sum1=0,sum2=0,sum3=0;
	for(int i=0;i<n;i++){
		sum1=sum1+a[i];
	}
	for(int i=0;i<mid;i++){
		sum2=sum2+a[i];
	}
	for(int i=mid-1;i<n;i++){
		sum3=sum3+a[i];
	}
	cout<<sum1<<" "<<sum2<<" "<<sum3;
}
