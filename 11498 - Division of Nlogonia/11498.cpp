#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a;
    while( scanf("%i", &a) && a ){
        int x,y;
        scanf("%i %i", &x, &y);
        while(a){
            int p,n;
            scanf("%i %i", &p, &n);
            if(x==p || y==n) printf("divisa\n");
            else if(p<x && n>y) printf("NO\n");
            else if(p>x && n>y) printf("NE\n");
            else if(p<x && n<y) printf("SO\n");
            else if(p>x && n<y) printf("SE\n");
            a--;
        }
    }
    return 0;
}
