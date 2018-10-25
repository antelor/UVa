#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int T, don=0;
    char b[10];
    scanf("%i", &T);
    while(T){
        char a[10];
        int num;
        cin >> a;
        if(!strcmp(a, "donate")){
            cin >> num;
            don+=num;
        }
        else printf("%i\n", don);
        T--;
    }
    return 0;
}
