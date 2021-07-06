#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int a[n][m],a2[n];
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
           
        }
    }
    int c=0;
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(a[i][j]<0)
    		  c++;
		}
	}
	
	cout<<c;
    
    
    
 return 0;   
}
