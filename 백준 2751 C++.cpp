#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	cin.tie(0);
	cout.tie(0);
	vector<int> v;
	int n; cin>>n;
	
	while(n--){
		int c;
		cin>>c;
		v.push_back(c);
	}
	sort(v.begin(), v.end());
	
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<"\n";
	}
}
