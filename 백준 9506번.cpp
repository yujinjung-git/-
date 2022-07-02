#include <iostream> 
#include <vector> 
using namespace std; 

int main(void){ 
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	
	while (1){ 
		int N; 
		cin >> N; 
		if (N == -1) { 
			break; 
		} 
		cout << N; 
		vector<int> v; 
		int sum = 0; 
		for (int i = 1; i <= N / 2; i++) { 
			if (N % i == 0) { 
				v.push_back(i); 
				sum += i; 
			} 
		} 
		if (sum == N) { 
			cout << " = "; 
			for (int i = 0; i < v.size() - 1; i++) { 
				cout << v[i] << " + "; 
			} 
			cout << v[v.size() - 1] << "\n"; 
			continue; 
		} 
		cout << " is NOT perfect.\n"; 
	} 
	return 0; 
}
