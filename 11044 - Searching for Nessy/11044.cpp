#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int T;
    //freopen("entrada.txt", "r", stdin);
    cin >> T;
    int n,m;
    float res;
    while(T){
        scanf("%i %i", &n, &m);
        res=floor( n/3 );
        res*=floor( m/3 );
        n= int(res);
        printf("%i\n", n);
        T--;
    }

    return 0;
}
