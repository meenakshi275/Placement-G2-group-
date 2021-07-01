#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cin>>n1>>n2;
	int a1[n1],a2[n2],a3[n1+n2];
	for(int i=0;i<n1;i++){
		cin>>a1[i];
	}
	for(int i=0;i<n2;i++){
		cin>>a2[i];
	}
	
	int c=0;
	for(int i=0;i<n2;i++){
     if(a2[i]==a2[i+1]){
     	c++;
     	int temp=a2[i+1];
     	for(int j=i+1;j<n2;j++){
     		a2[j]=a2[j+1];
		 }
		 a2[n2-1]=temp;
	 }
    }
    int b=0;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2-c;j++){
			if(a1[i]==a2[j]){
			 a3[b]=a1[i];
			 b++;
			}
		}
	}
	
	for(int i=0;i<b;i++){
		cout<<a3[i]<<" ";
	}
	
}
