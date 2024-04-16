#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 4

int main()
{
    
    
    int matriz[N][M], *puntero;

    puntero = &matriz[0][0]; 

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            *(puntero + i*M +j) = rand() % 100 + 1;
            printf("%d ",*(puntero + i*M +j));
        }
        printf("\n");
    }
  

    return 0;

}