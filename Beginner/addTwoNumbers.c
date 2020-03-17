#include <stdio.h>
int main()
{
    int T, A, B, add; //T is number of testcases
    int i=0, j, store[1000];

    scanf("%d", &T);

    while(i<T) {
        scanf("%d", &A);
        scanf("%d", &B);
        add = A + B;
        store[i] = add;
        i++;
    }

    for(i=0; i<T; i++) {
        printf("%d ", store[i]);
    }

    return 0;
}