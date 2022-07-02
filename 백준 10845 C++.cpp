#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
    queue <int> q;
    int N;cin>>N;
    while(N--){
        string str;
        cin>>str;
        if(str=="push"){
            int x;cin>>x;
            q.push(x);
        }
        else if(str=="pop"){
            if(q.empty()){
                cout<<"-1\n";
            }
            else{
                cout<<q.front()<<"\n";
                q.pop();
            }
        }
        else if(str=="size"){
           	cout<<q.size()<<"\n";
        }
        
        else if(str=="empty"){
            if(q.empty()){
				cout<<"1"<<"\n";
			}
			else{
				cout<<"0"<<"\n";
			}
        }
        
        else if(str=="front"){
        	if(q.empty()){
        		cout<<"-1"<<"\n";
			}
			else{
				cout<<q.front()<<"\n";
			}
		}
		else{
			if(q.empty()){
        		cout<<"-1"<<"\n";
			}
			else{
				cout<<q.back()<<"\n";
			}
		}
    }
}
