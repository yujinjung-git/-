#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
	vector<pair <pair<int,int>, string> > v;
	int i;
	int n; cin>>n;
	for(i=0; i<n; i++){
		int x;
		string s;
		cin>>x>>s;
		v.push_back({{x,i},s});
	}
	sort(v.begin(), v.end());
	for(int i=0; i<v.size(); i++){
		cout<<v[i].first.first<<" "<<v[i].second<<"\n";
	}
}
