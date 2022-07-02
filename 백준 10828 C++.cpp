#include<stack>
#include<string>
#include<iostream>
using namespace std;

int main(){
	int N; cin>>N;
	stack<int> s;
	
	while(N--){
		string str; cin>>str;
		if(str=="push"){
			int x;
			cin>>x;
			s.push(x);
		}
		else if(str=="pop"){
			if(s.empty()){
				cout<<"-1\n";
			}
			else{
				cout<<s.top()<<"\n";
				s.pop();
			}
		}
		else if(str=="size"){
			cout<<s.size()<<"\n";
		}
		else if(str=="empty"){
			if(s.empty()){
				cout<<"1\n";
			}
			else{
				cout<<"0\n";
			}
		}
		else{
			cout<<s.top()<<"\n";
		}
	}
}
