#include<stdio.h>
#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)
int main(){
	int i,j,k,arr[5]={0,},tmp;
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	
	
	
	
	for (i = 4; i > 0; i--) {

		for (j = 0; j < i; j++)
			if (arr[j] > arr[j+1]) {
				swap(int, arr[j], arr[j+1]);

				for (tmp = 0; tmp < 5; tmp++)
					printf("%d ", arr[tmp]);

				putchar('\n');
			}
	}
}
