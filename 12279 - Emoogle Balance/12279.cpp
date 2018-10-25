#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int T, i=1;;
    while(scanf("%i", &T) && T){
        int res=0, res2=0;
        for(int i=0; i<T; i++){
            int a;
            scanf("%i", &a);
            if(a) res++;
            else res2++;
        }
        printf("Case %i: %i\n", i, res-res2);
        i++;
    }
    return 0;
}
