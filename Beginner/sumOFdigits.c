#include <stdio.h>

//declaring function for sum of digits

int add(int number)
{
	int digit, sum = 0;

	while(number > 0) {

		digit = number % 10;
		sum = sum + digit;
		number /= 10;
	}

	return sum;
}


int main()
{
	int T, sum; //here T is the number of testcase

	scanf("%d", &T);
    int num[T];

    for(int i=0; i<T; i++) {
        scanf("%d", &num[i]);  //taking the inputs
        sum = add(num[i]);     //calling the function
        num[i] = sum;
    }

    //printing the result
    for(int i=0; i<T; i++) {
        printf("%d\n", num[i]);
    }

	return 0;
}
