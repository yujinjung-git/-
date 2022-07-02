#include <stdio.h>
int main(){
	int n,i,a,x,y;
	int arr[100001];
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &arr[i]);
		arr[i]+=arr[i-1];
	}
	scanf("%d", &a);
	for(i=0; i<a; i++){
		scanf("%d %d", &x, &y);
		printf("%d\n", arr[y]-arr[x-1]);
	}
	
	
}
/*#include<stdio.h>
int s[100001], n, m;
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &s[i]);
        s[i] += s[i - 1];
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", s[b] - s[a - 1]);
    }
    return 0;
}*/
