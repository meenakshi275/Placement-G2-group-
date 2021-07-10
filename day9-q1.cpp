#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
	cin>>input;
	int n=input.length();
	int integer[7]={1,5,10,50,100,500,1000};
	string roman="IVXLCDM";
	int result[n];
	for(int i=0;i<input.length();i++){
		for(int j=0;j<7;j++){
			if(input[i]==roman[j]){
				result[i]=integer[j];
			}
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		 if(i==n-1&&result[i]<=result[i-1]){
			sum=sum+result[i];
		}
	  else if(result[i]>=result[i+1]&&i<n-1){
			sum=sum+result[i];
		}
	   
		else
		 {
		 sum=sum+result[i+1]-result[i];
		 i++;
	}
	
	}
	cout<<sum;
}
