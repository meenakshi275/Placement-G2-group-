#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
  
  for(int i=0;i<n;i++){
  	int c=0;
  	for(int j=1;j<n;j++){
  	
  		if(a[i]>a[j]){
  			c++;
		  }
	  }
	  cout<<c<<" ";
  }
 
}
