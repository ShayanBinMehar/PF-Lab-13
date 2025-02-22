#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	float total = 0.0;
	printf("Enter Number of points: ");
	scanf("%d", &n);
	float *ptr;
	ptr = (float*)calloc(n,sizeof(float));
	for(int x = 0; x < n; x++){
		printf("Enter fee for point %d: ",x+1);
		scanf("%f",&ptr[x]);
		total += ptr[x];
	}
	
	printf("Total profit for the facility: %f",total);
	free(ptr);
	return 0;

}