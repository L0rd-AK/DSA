#include <bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Selection_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int position = i;
        for (int j = i+1; j < n - i - 1; j++)
        {
            if (a[j] < a[position]) position = j;
        }

        if(position!=i){
            swap(&a[i],&a[position]);
        }
    }
    
}
int main()
{
    int a[] = {2,4,7,1,9,0,3,5,6,8};
    int size =sizeof(a)/sizeof(a[0]);
    Selection_sort(a, size);

    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}