#include <stdio.h>
int main()
{
	int i, N, T, first, last, sum;
	
	scanf("%d", &T); //T is the number of testcases
	
	int arr[T];
	
	//Main Code
	for(i=0; i<T; i++) {
	    scanf("%d", &N);
	    
	    //here is the main trick
	    
	    last = N%10;
	    while(N >= 10) {
			N = N/10;
		}
		first = N;
		sum = first+last;
	    
	    //storing the result in a array to print output.
	    arr[i] = sum;
	}
	
	
	//printing the output
	for(i=0; i<T; i++) {
	    printf("%d\n", arr[i]);
	}
	
	return 0;
}

