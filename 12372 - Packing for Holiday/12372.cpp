#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int T, i=1;
    scanf("%i", &T);
    while(T){
        int L,W,H;
        scanf("%i %i %i", &L, &W, &H);
        if(L<=20 && W<=20 && H<=20) printf("Case %i: good\n", i);
        else printf("Case %i: bad\n", i);
        i++;
        T--;
    }
    return 0;
}
