#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int start,first,snd,third;
    //freopen("entrada.txt", "r", stdin);
    while(scanf("%i %i %i %i", &start, &first, &snd, &third) && (start||first||snd||third)){
        int res=1080;

        if(start>first) res+=(start-first)*9;
        else res+=(start+40-first)*9;
        //• continue turning counter-clockwise until the 2nd number is reached
        if(snd>first) res+= (snd-first)*9;
        else res+=(snd+40-first)*9;
        //turn the dial clockwise again until the 3rd number is reached
        if(snd>third) res+=(snd-third)*9;
        else res+=(snd+40-third)*9;

        cout << res << endl;
    }
    return 0;
}
