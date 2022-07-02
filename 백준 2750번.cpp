#include <stdio.h>
/*int main(){
	int n,j,i,temp, arr[1000];
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
		}
	for(i=0; i<n; i++){
		for(j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d\n", arr[i]);
	}
}
*/

int main(){
	int n,i,j,temp,arr[1000];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(arr[j]>arr[i]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d\n", arr[i]);
	}
}

