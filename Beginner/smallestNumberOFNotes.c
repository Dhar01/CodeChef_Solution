#include <stdio.h>
int main()
{
	int T, N, dig=0;
	
	scanf("%d", &T);
	
	int arr[T];
	
	for(int i=0; i<T; i++) {
		scanf("%d", &N);
		int sum = 0;
		//main code
		while(N > 0) {
			if(N/100) {
				dig = N/100;
				N = N%100;
			}
			else if(N/50) {
				dig = N/50;
				N = N%50;
			}
			else if(N/10) {
				dig = N/10;
				N = N%10;
			}
			else if(N/5) {
				dig = N/5;
				N = N%5;
			}
			else if(N/2) {
				dig = N/2;
				N = N%2;
			}
			else if (N/1) {
				dig = N/1;
				N = N%1;
			}
			sum += dig;
		}
		
		arr[i] = sum;
	}
	
	//printing output
	for(int i=0; i<T; i++) {
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
