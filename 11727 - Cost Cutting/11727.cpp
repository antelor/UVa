#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int T, i=1;
    cin >> T;
    while(T){
        int a[5];
        scanf("%i %i %i", &a[0], &a[1], &a[2]);
        sort(a, a+3);
        printf("Case %i: %i\n", i, a[1]);
        i++;
        T--;
    }
    return 0;
}
