#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int T,a,b;
    cin >> T;
    while(T){
        scanf("%i %i", &a,&b);
        if(a==b) printf("=\n");
        else (a<b) ? printf("<\n") : printf(">\n");
        T--;
    }
    return 0;
}
