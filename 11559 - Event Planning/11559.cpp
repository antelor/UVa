#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
    int N, B, H, W;

    while( scanf("%i %i %i %i", &N, &B, &H, &W) != EOF){
        priority_queue<int> options;
        while(H){
            int p, a;

            scanf("%i", &p);

            for(int i=0; i<W; i++){
                scanf("%i", &a);
                if(a >= N && a*p<=B) options.push(N*p*-1);
            }
            H--;
        }
        if(options.empty()) printf("stay home\n");
        else printf("%i\n", options.top()*-1);

    }

    return 0;
}
