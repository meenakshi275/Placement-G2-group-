#include<bits/stdc++.h>
using namespace std;
int main(){
	string input;
	cin>>input;
    int n=input.length();
    stack<char> stack;
    int c=0;
    for(int i=0;i<n;i++)
    {
    	if(input[i]=='{'||input[i]=='('||input[i]=='['){
    		stack.push(input[i]);
		}
		else if(input[i]==')'){
			if(!stack.empty() && stack.top() == '('){
				stack.pop();
			}
			else{
			    c++;
				break;
			}
		}
		else if(input[i]=='}'){
			if(!stack.empty() && stack.top() == '{'){
				stack.pop();
			}
			else{
			    c++;
				break;
			}
		}
		else if(input[i]==']'){
			if(!stack.empty() && stack.top() == '['){
				stack.pop();
			}
			else{
				c++;
				break;
			}
		}
	}
    
    if(!stack.empty())
    cout<<"False";
    else
      {
	  if(c==0)
       cout<<"True";
      else if(c!=0)
        cout<<"False";
       
}}
