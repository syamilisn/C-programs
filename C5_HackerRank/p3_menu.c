#include <stdio.h>

void main(){
	int n, m, i, j, sum[5]={0}, avg[5]={0} , temp ;
	int a[5][5];
	scanf("%d %d", &n , &m);              	                  // Reading input from STDIN
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[i][j] );
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			sum[i] += a[i][j];
		}
		avg[i] = sum[i]/m;
		printf("sum = %d avg = %d\n", sum[i], avg[i]);
	}
	for(i=1; i<n; i++){
		for(j=1; j<n-i; j++){
			if(sum[i-1]<sum[i]){
				temp = sum[i-1], sum[i-1] = sum[i], sum[i] = temp;
			}
		}
	}
	
	printf("Input number is %d.\n", sum[0]);       // Writing output to STDOUT
}
