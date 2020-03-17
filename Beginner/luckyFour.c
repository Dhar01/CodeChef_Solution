#include <stdio.h>
int main()
{
	int T, num, count;
	
	scanf("%d", &T);
	
	int arr[T];
	
	for(int i=0; i<T; i++) {
		scanf("%d", &num);
		count = 0;
		while(num != 0) {
			if(num%10 == 4) {
				count++;
			}
			num = num/10;
		}
		arr[i] = count;
	}
	
	for(int i=0; i<T; i++) {
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
