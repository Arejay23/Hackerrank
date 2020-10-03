#include <stdio.h>
#include <stdlib.h>

#define INFY 99999

long int m[20][20];
int k1[20][20];
int p[20], i, j, n;

void printMatrix()
{
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%ld ", m[i][j]);
        printf("\n");
    }
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%d ", k1[i][j]);
        printf("\n");
    }
}

void printOptimal(int i1, int j1)
{
    if (i1 == j1)
    {
        printf(" A%d ", i1);
    }
    else
    {
        printf(" ( ");
        printOptimal(i1, k1[i1][j1]);
        printOptimal(k1[i1][j1] + 1, j1);
        printf(" ) ");
    }
}

void mcm()
{
    long int k;
    int q;

    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            m[i][j] = 0L;
            k1[i][j] = 0;
        }
    }
    for (i = 1; i < n; i++)
        k1[i][i + 1] = i;

    for (i = 1; i <= n; i++)
    {
        m[i][i] = 0L; //1st level of initialization
    }

    for (i = 1; i <= n; i++)
    {
        m[i][i + 1] = p[i - 1] * p[i] * p[i + 1];
    }

    int diff = 2;
    while (diff <= n - 1)
    {
        for (i = 1, j = i + diff; i <= n - diff; i++, j++)
        {
            m[i][j] = INFY;

            for (k = i; k < j; k++)
            {
                q = m[i][k] + m[k + 1][j] + (p[i - 1] * p[k] * p[j]);

                if (q < m[i][j])
                {
                    m[i][j] = q;
                    k1[i][j] = k;
                }
            }
        }
        diff++;
    }

    printOptimal(1, n);
    printf("\n");
    printMatrix();
}

int main()
{
    printf("No. of matrices : ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &p[i]);
    }
    mcm();
    return 0;
}