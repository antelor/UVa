#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char a[10];
    int i=1;
    while(cin >> a){
        if(!strcmp(a, "*")) break;
        if(!strcmp(a, "Hajj")) printf("Case %i: Hajj-e-Akbar\n", i);
        else printf("Case %i: Hajj-e-Asghar\n", i);
        i++;
    }
    return 0;
}
