#include <bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void insertion_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j>=0; j--)
        {
            if (a[j] < a[i]) swap(&a[i],&a[j]);
        }

    }
    
}
int main()
{
    int a[] = {2,4,7,1,9,0,3,5,6,8};
    int size =sizeof(a)/sizeof(a[0]);
    insertion_sort(a, size);

    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}