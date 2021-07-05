#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int a[n][m],a2[m][n];
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
           
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a2[i][j]=a[j][i];
           
        }
    }
    
    
    
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a2[i][j]<<" ";
           
        }
        cout<<endl;
    }
    
    
return 0;    
}
