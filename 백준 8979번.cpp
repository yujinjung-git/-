#include<stdio.h>
int main(){
	int n,k,i,j,gold[1001],sil[1001],bron[1001],index,cnt=0;
	scanf("%d %d", &n, &k);
	for(i=0; i<n; i++){
		scanf("%d", &index);
		scanf("%d %d %d", &gold[index], &sil[index], &bron[index]);
	}	
	for(i=1; i<=n; i++){
		if(gold[i]>gold[k]){
			cnt++;
		}
		else if(gold[i]==gold[k]){
			if(sil[i]>sil[k]){
				cnt++;
			}
			else if(sil[i]==sil[k]){
				if(bron[i]>bron[k]){
					cnt++;
				}
			}
		}	
	}
	printf("%d", cnt+1);
}
