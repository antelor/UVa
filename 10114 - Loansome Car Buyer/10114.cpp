#include <iostream>
#include <stdio.h>

using namespace std;

float records[110];

int main()
{
    int D, N;
    float P, A;
    while( scanf("%i %f %f %i", &D, &P, &A, &N) && D>=0){
        double carvalue = A + P;
        double owes = A;

        int index;
        float perc;
        for(int i=0; i<N; i++){
            scanf("%i", &index);
            scanf("%f", &perc);


            for(int j=index; j<D; j++){
                records[j]=perc;
            }
        }

        double amount = A/D;

        int month=0;

        carvalue = carvalue * (1-records[month]);

        while(carvalue < owes){
            month++;

            owes -= amount;
            carvalue -= carvalue*records[month];
        }

        (month==1) ? printf("1 month\n") : printf("%i months\n", month);
    }
    return 0;
}
