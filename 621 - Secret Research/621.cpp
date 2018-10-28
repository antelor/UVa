#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int T;
    char a[10000];
    scanf("%i", &T);
    while(T){
        scanf("%s", a);
        if(!strcmp(a, "1") || !strcmp(a, "4") || !strcmp(a, "78")) printf("+\n");
        else if(a[strlen(a)-1]=='5' && a[strlen(a)-2]=='3') printf("-\n");
        else if(a[0]=='9' && a[strlen(a)-1]=='4') printf("*\n");
        else if(a[0]=='1' && a[1]=='9' && a[2]=='0') printf("?\n");
        else printf("+\n");

        T--;
    }
    return 0;
}
