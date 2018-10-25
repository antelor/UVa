#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int T;
    scanf("%i", &T);
    while(T){
        char a[7];
        scanf("%s", a);
        if(strlen(a)==5) printf("3\n");
        else{
            int one=0;
            if(a[0]=='o') one++;
            if(a[1]=='n') one++;
            if(a[2]=='e') one++;
            if(one>=2) printf("1\n");
            else printf("2\n");
        }
        T--;
    }
    return 0;
}
