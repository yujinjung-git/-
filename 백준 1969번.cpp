/*#include<stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
char cmax(int a, int t, int g, int c, int max){
	if(max==a) return 'A';
	else if(max==c) return 'C';
	else if(max==g) return 'G';
	else return 'T';
}

int main(){
	int n,m,i,j,max=0,hd=0;
	char dna[1001][51];
	int a=0,g=0,t=0,c=0;
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++){
		scanf("%s", &dna[i]);	
	}
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(dna[j][i]=='A'){
				a++;
				break;
			}
			else if(dna[j][i]=='C'){
				c++;
				break;
			}
			else if(dna[j][i]=='G'){
				g++;
				break;
			}
			else if(dna[j][i]=='T'){
				t++;
				break;
			}
		}
		max=MAX(a>c?a:c, g>t?g:t);
		hd+=(n-max);
		printf("%c", cmax(a, t, g, c, max));
	}
	printf("\n%d", hd);
}*/

#include<stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))

char toChar(int a, int t, int g, int c, int max) {
	if (max == a) return 'A';
	else if (max == c) return 'C';
	else if (max == g) return 'G';
	else return 'T';
}
int main() {
	int i, j, n, m, max = 0, hd = 0; scanf("%d%d", &n, &m);
	char dna[1001][51];
	for (i = 0; i < n; i++) scanf("%s", &dna[i]);
	for (i = 0; i < m; i++) {
		int a = 0, t = 0, g = 0, c = 0;
		for (j = 0; j < n; j++) {
			switch (dna[j][i]) {
			case 'A': a++; break;
			case 'T': t++; break;
			case 'G': g++; break;
			case 'C': c++; break;
			}
		}
		max = MAX(a > c ? a : c, g > t ? g : t);
		hd += (n - max);
		printf("%c", toChar(a, t, g, c, max));
	}
	printf("\n%d", hd);
}





