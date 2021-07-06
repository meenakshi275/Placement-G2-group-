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
    int c=0,d=0;
    for(int i=0;i<n-1;i++){
    	for(int j=0;j<m-1;j++){
	    
		  if(a[i][j]!=a[i+1][j+1]&&i<n-1&&j<m-1){
              c=1;
			  break;}
	    }
	    if(c==1){
	    	break;
		}
	}
    if(c!=0){
    	cout<<"False";
	}
	else{
		cout<<"True";
	}
    	
	

    
    
    
    
    
 return 0;   
}
