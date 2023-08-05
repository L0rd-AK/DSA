#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Bubble(int a[], int n)
{
    int i, j, flag = 0;

    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}
int main()
{
    int a[] = {2,4,7,1,9,0,3,5,6,8};
    int size =sizeof(a)/sizeof(a[0]);
    Bubble(a, size);

    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}