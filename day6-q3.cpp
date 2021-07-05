#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int a[n][m];
    vector<vector<int> > v;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
           
        }
    }
    
    for(int i=0;i<n;i++){
        vector<int> v1;
        for(int j=0;j<m;j++){
            int num=a[i][j];
         v1.push_back(num); 
           
        }
        v.push_back(v1);
    }
     
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
          reverse(v[i].begin(),v[i].end());
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(v[i][j]==1)
             v[i][j]=0;
             else
             v[i][j]=1;
        }
    }
     for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
          cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
