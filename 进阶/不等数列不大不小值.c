#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
    int i, j, k;

    do{
        i = rand() % 5;
        j = rand() % 5;
        k = rand() % 5;
    }while (i == j || j == k || i == k);
    
    
    int a[] = {1, 2, 3, 4, 5};
    int max, min;

    if (a[i] > a[j])
    {
        max = a[i];
        min = a[j];
    }
    else
    {
        max = a[j];
        min = a[i];
    }

    if (max < a[k])
    {
        max = a[k];
    }
    else if (min > a[k])
    {
        min = a[k];
    }

    if (a[i] == max || a[i] == min)
    {
        if (a[j] == max || a[j] == min)
        {
            printf("%d", a[k]);
        }
        else
        {
            printf("%d", a[j]);
        }
    }
    else
    {
        printf("%d", a[i]);
    }

    printf("\n%d %d %d",i,j,k);

    return 0;
}