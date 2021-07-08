#include<bits/stdc++.h>
using namespace std;

int main()
{  
	int n,m;
	cin>>n>>m;
   vector<vector<int> > m1;
   vector<vector<int> > m2;
    int data;
	for(int i=0;i<n;i++){
		vector<int> d;
		for(int j=0;j<m;j++){
			cin>>data;
			d.push_back(data);
			
		}
		m1.push_back(d);
	}
	for(int i=0;i<n;i++){
		vector<int> d;
		for(int j=0;j<m;j++){
			cin>>data;
			d.push_back(data);
			
		}
		m2.push_back(d);
	}
	int k=4,c=0;

   	if(m1==m2){
		cout<<"True";
		c++;
	}
	else{
	
	while(k--){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<m;j++){
			swap(m1[i][j],m1[j][i]);
		}
	}
	for(int i=0;i<m;i++){
		reverse(m1[i].begin(),m1[i].end());
	}
		if(m1==m2){
			
			c++;
			break;
		}
		
		
	}
    if(c==0){
    	cout<<"False";
	}
	else
	 cout<<"True";
}
}
