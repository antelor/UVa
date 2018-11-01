#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int N;
    scanf("%i", &N);
    while(N){
        int f;
        int sum=0;

        scanf("%i", &f);

        while(f){
            int s,n,v;
            scanf("%i %i %i", &s, &n, &v);

            sum += s*v;
            f--;
        }
        printf("%i\n", sum);
        N--;
    }

    return 0;
}
