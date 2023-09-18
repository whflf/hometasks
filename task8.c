#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#define LENGTH 100


int arraySwap(int array[], int m, int n)
{
    int j = 0;
    for (int i = m; i < m + n / 2 + 1; i++)
    {
        if (n % 2 == 1 && i == m + n / 2)
        {
            break;
        }
        int auxiliaryVariable = array[m + n - j - 1];
        array[m + n - j - 1] = array[i];
        array[i] = auxiliaryVariable;
        j += 1;
    }
    return array;
}


int main()
{
    int length = 0;
    int m, n;
    printf("length = ");
    scanf_s("%d", &length);
    int *numbers = (int*)malloc(length * sizeof(int));
    for (int i = 0; i < length; i++)
    {
        printf("numbers[%d] = ", i);
        scanf_s("%d", &numbers[i]);
    }
    printf("m = ");
    scanf_s("%d", &m);
    printf("n = ");
    scanf_s("%d", &n);
    arraySwap(numbers, 0, m);
    arraySwap(numbers, m, n);
    arraySwap(numbers, 0, m + n);
    for (int i = 0; i < n; ++i)
        printf("%d ", numbers[i]);
    free(numbers);
}
