#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int T;
    scanf("%i", &T);
    while(T){
        int Min=101;
        int Max=-1;
        int a;
        scanf("%i", &a);

        int j;
        for(int i=0; i<a; i++){
            scanf("%i", &j);
            if (j<Min) Min=j;
            if (j>Max) Max=j;
        }
        printf("%i\n", 2*(Max-Min));
        T--;
    }
    return 0;
}
