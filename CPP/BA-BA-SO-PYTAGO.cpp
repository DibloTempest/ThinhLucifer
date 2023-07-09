#include <stdio.h>
main()
{
    int n, i, j, z;
    printf("\nn=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // Not 1<=n;
    {
        for (j = 1; j <= n; j++)
        {
            float z = sqrt(i * i + j * j);
            if ((int)z == z)
                if ((i < j) && (j < z) && (z <= n)) // Not nessary if j = i + 1;
                    printf("%d %d %f\n", i, j, z);
        }
    }
}