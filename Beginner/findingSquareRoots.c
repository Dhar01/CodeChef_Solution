#include <stdio.h>
#include <math.h>

int main()
{
	int i, N, T; //the number of testcases
	
	scanf("%d", &T);
	
	int arr[T];
	
	for(i=0; i<T; i++) {
	    scanf("%d", &N);
	    arr[i] = (double) sqrt(N);
	}
	
	for(i=0; i<T; i++) {
	    printf("%d\n", arr[i]);
	}
	
	return 0;
}