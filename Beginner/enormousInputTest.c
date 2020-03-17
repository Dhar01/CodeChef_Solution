#include <stdio.h>
#include <math.h>

int main()
{
    int n,k; //<=pow(10, 7);
    int ti; //<pow(10, 9);
    int i, div=0;

    scanf("%d %d", &n, &k);

    if(n<=pow(10, 7) && k<=pow(10, 7)) {
        for(i=0; i<n; i++) {
            scanf("%d", &ti);
            if(ti%k==0){
                div++;
            }
        }
        printf("%d", div);
    }
    return 0;

}
