// Program treba naci sumu svakog reda i stupca matrice i ispisat.

#include <stdio.h>

int main()
{
    int A[10][10],i,j,m,n;
    int row, col, sum = 0;

    printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi element A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    printf("\nDana matrica je: \n\n");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", A[i][j]);
            }
            printf("\n\n");
        }
    /*
     * Racunamo sumu elemenata svakog reda
     */
    for(row=0; row<m; row++)
    {
        sum = 0;
        for(col=0; col<n; col++)
        {
            sum += A[row][col];
        }

        printf("\nSuma elemenata reda  %d = je %d\n", row+1, sum);
    }

    /*
     * Racunam osumu elemenata svakog stupca.
     */
    for(row=0; row<m; row++)
    {
        sum = 0;
        for(col=0; col<n; col++)
        {
            sum += A[col][row];
        }

        printf("\nSuma elemeanata stupca %d = je %d\n", row+1, sum);
    }

    return 0;
}
