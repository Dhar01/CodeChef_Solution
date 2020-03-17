#include <stdio.h>
int main()
{
	int T, A, B, rem;  //here T is the total number of testcases
	int i = 0, store[1000];
	
	scanf("%d", &T);
	
	while(i<T) {
		scanf("%d %d", &A, &B);
		rem = A%B;
		store[i] = rem;
		i++;
	}
	
	for(i=0; i<T; i++) {
		printf("%d \n", store[i]);
	}
	
	return 0;
}