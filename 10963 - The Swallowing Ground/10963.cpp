#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int T;
    scanf("%i", &T);
    while(T){
        int W, distance;
        bool flag=false;
        scanf("%i", &W);
        W--;
        int j, j2;
        scanf("%i", &j);
        scanf("%i", &j2);
        distance= abs(j2-j);
        while(W){
            scanf("%i", &j);
            scanf("%i", &j2);
            if(distance != abs(j2-j)){
                flag=true;
            }
            W--;
        }
        (flag) ? printf("no\n") : printf("yes\n");
        T--;
        if(T) printf("\n");
    }

    return 0;
}
