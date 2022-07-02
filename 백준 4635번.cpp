/*#include<stdio.h>
int main(){
	int n=0,i,sum;
	int s[10]={0,},t[10]={0,};
	while(n!=-1){
		scanf("%d", &n);
		if(n==-1) return 0;
		for(i=0; i<n; i++){
			scanf("%d %d", &s[i], &t[i]);
		}
		sum+=(s[0]*t[0]);
		for(i=1; i<n; i++){
			sum+=(s[i]*(t[i]-t[i-1]));
		}
		printf("%d miles\n", &sum);
		
	}
	
}*/

#include<stdio.h>
int main(){
	int n=0,i,sum=0,s,t,tl=0;
	while(1){
		scanf("%d", &n);
		if(n==-1) return 0;
		
		for(i=0; i<n; i++){
			scanf("%d %d", &s, &t);
			sum+=s*(t-tl);
			tl=t;
		}
		printf("%d miles\n", sum);
		sum=0;
		s=0;
		t=0;
		tl=0;
	}
}
