#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char a[20];
    int i=1;
    while(  cin >> a && a[0]!='#' ){
        if(!strcmp(a, "HELLO")) printf("Case %i: ENGLISH\n", i);
        else if(!strcmp(a, "HOLA")) printf("Case %i: SPANISH\n", i);
        else if(!strcmp(a, "BONJOUR")) printf("Case %i: FRENCH\n", i);
        else if(!strcmp(a, "HALLO")) printf("Case %i: GERMAN\n", i);
        else if(!strcmp(a, "CIAO")) printf("Case %i: ITALIAN\n", i);
        else if(!strcmp(a, "ZDRAVSTVUJTE")) printf("Case %i: RUSSIAN\n", i);
        else printf("Case %i: UNKNOWN\n", i);

        i++;
    }
    return 0;
}
