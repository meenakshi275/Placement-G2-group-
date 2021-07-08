#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int a[n][m];
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
           
        }
    }
	int k;
	cin>>k;

	while(k--){
	  int temp=a[n-1][m-1];
	  for(int i=n-1;i>=0;i--){
	      for(int j=m-1;j>=0;j--){
	          if(j==0&&i!=0){
	              a[i][j]=a[i-1][n-1];
	          }
	          if(i==0&&j==0){
	              a[i][j]=temp;
	          }
	          else{
	              a[i][j]=a[i][j-1];
	          }
	      }
	  }
           
		
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
