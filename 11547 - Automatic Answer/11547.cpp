#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int T,a;
    scanf("%i", &T);
    while(T){
        int res;
        scanf("%i", &a);
        res=a*567/9;
        res+=7492;
        res*=235;
        res/=47;
        res-=498;
        res= abs((res/10)%10);
        printf("%i\n", res);
        T--;
    }
    return 0;
}
