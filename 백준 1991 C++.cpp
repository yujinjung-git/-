#include<bits/stdc++.h>

#define sor(x) sort((x).begin(),(x).end())
// #define snd second
#define pb push_back

using namespace std;

int N;
vector< pair<int,int> > v(100);

void pre(char n){
    cout<<n; // root
    if(v[n].first!='.'){ //left
        pre(v[n].first); 
    }
    if(v[n].second!='.'){
        pre(v[n].second); //right
    }
}
void in(char n){
    if(v[n].first!='.'){ //left
        in(v[n].first); 
    }
    cout<<n; // root
    if(v[n].second!='.'){
        in(v[n].second); //right
    }

}

void post(char n){
    if(v[n].first!='.'){ //left
        post(v[n].first); 
    }
    if(v[n].second!='.'){
        post(v[n].second); //right
    }
    cout<<n; // root
}
int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        char p,c1,c2;
        cin>>p>>c1>>c2;
        v[p]={c1,c2};
    }

    pre('A');
    cout<<"\n";
    in('A');
    cout<<"\n";
    post('A');
}
