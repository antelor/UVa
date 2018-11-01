#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int T, j=1;
    int N;
    scanf("%i", &T);
    while(T){
        scanf("%i", &N);
        int maxval=-1;
        while(N){
            int a;
            scanf("%i", &a);
            if(a>maxval) maxval=a;
            N--;
        }
        printf("Case %i: %i\n", j, maxval);
        j++;
        T--;
    }

    return 0;
}
