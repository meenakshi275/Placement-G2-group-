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
    int k,c=0;
    for(int i=0;i<n;i++){
    	int min=10003;
    	int max=-1;
    	for(int j=0;j<m;j++){
    		if(a[i][j]<min){
    			min=a[i][j];
    			 k=j;
			}
		}
		for(int j=0;j<m;j++){
	 	if(a[j][k]>max){
                 max=a[j][k];				
			}
		}
		if(min==max){
			c=min;
			break;
		}
	}
    cout<<c;
    
    
    
    
    
 return 0;   
}
