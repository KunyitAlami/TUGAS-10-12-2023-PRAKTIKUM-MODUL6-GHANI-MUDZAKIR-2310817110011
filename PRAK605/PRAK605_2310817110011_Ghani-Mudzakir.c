#include <stdio.h>

int main()
{
    int ordo;
    scanf("%d", &ordo);

    int matriksA[ordo][ordo], matriksB[ordo][ordo], matriksHasil[ordo][ordo];

    printf("Matriks A\n");
    for (int  i = 0; i < ordo; i++)
    {
        for (int j = 0; j < ordo; j++)
        {
            scanf("%d", &matriksA[i][j]);
        }

    }

    printf("Matriks B\n");
    for (int  i = 0; i < ordo; i++)
    { 
        for (int j = 0; j < ordo; j++)
        {
            scanf("%d", &matriksB[i][j]);
        }
    }

    // kita ulah matriks hasil nya jadi 0 dhulu
    for (int i = 0; i < ordo; i++)
    {
        for (int j = 0; j < ordo; j++)
        {
            matriksHasil[i][j] = 0;
        }
    }

    // kita ulah perkalian matriksnya
    for (int i = 0; i < ordo; i++)
    {
      for (int j = 0; j < ordo; j++)
        {
            for (int k = 0; k < ordo; k++)
            {
                matriksHasil[i][j] += (matriksA[i][k]*matriksB[k][j]);
            }   
        }
    }

    // coba kita print
    printf("Matriks AXB\n");
    for (int i = 0; i < ordo; i++)
    {
      for (int j = 0; j < ordo; j++)
        {
           printf("%d ", matriksHasil[i][j]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}



