#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string str; cin>>str;
		stack<char> s;
		int c=0;
		
		for(int i=0; i<str.length(); i++){
			if(str[i]=='('){
				s.push('(');
			}
			else{
				if(s.empty()){
					c=1;
					break;
				}
				else{
					s.pop();
				}
			}
		}
		if(c==1 || !s.empty()){
			cout<<"NO"<<"\n";
		}
		else{
			cout<<"YES"<<"\n";
		}
	}
}
