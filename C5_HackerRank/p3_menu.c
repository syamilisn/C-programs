#include <stdio.h>

void main(){
	int n, m, i, j, sum[5]={0}, temp;
	float avg[5]={0};
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
		avg[i] = (float)sum[i]/m;
		printf("sum = %d avg = %f\n", sum[i], avg[i]);
	}
	for(i=1; i<n; i++){
		for(j=1; j<n-i; j++){
			if(avg[i-1]<avg[i]){
				temp = avg[i-1], avg[i-1] = avg[i], avg[i] = temp;
			}
		}
	}
	
	printf("Input number is %d.\n", avg[0]);       // Writing output to STDOUT
}
