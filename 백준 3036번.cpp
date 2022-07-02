#include<stdio.h>
int gcd(int a, int b){
	int gcdNum;
	while(b){
		if(a==b){
			a=1;
		}
		else{
			gcdNum=a%b;
			a=b;
			b=gcdNum;
		}
	}
	return a;
}

int main(){
	int n,i,j,num,c;
	scanf("%d", &n);
	int arr[100]={0,};
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=1; i<n; i++){
		c=gcd(arr[0], arr[i]);
		if(arr[0]%c==0&&arr[i]%c==0){
			printf("%d/%d\n", arr[0]/c, arr[i]/c);
		}
		else{
			printf("%d/%d\n", arr[0], arr[i]);
		}
	}	
}


