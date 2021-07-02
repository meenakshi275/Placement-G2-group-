#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],a2[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m=n/2,c=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
		  a2[i]=a[c];
		  	c++;
		}
		else{
			a2[i]=a[m];
			m++;
		}
	}
		for(int i=0;i<n;i++){
		cout<<a2[i];
	}
}
