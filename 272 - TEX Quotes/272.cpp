#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char a[1000];
    bool flag=true;

    //freopen("entrada.txt", "r", stdin);
    //freopen("salida.txt", "w", stdout);

    while( scanf ("%[^\n]%*c", a) != EOF){
        for(int i=0; a[i]; i++){
            if(a[i]=='"'){
                if(flag){
                    printf("``");
                    flag=!flag;
                }
                else{
                    printf("''");
                    flag=!flag;
                }
            }
            else{
                printf("%c",a[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
