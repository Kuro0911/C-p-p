// insersion sort = INSERTS NEXT ELE TO A ALREDY SORTED ARR BY USING PAIRWISE SWAPS ;
#include <bits/stdc++.h>

using namespace std;
void printarr(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
};
void insersion_sort(int *a, int n)
{
    int key, j;
    int cnt = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        // loop for each pass;
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            cnt++;
            j--;
        }
        a[j + 1] = key;
    }
    cout << cnt << endl;
};
int main()
{
    int a[] = {6, 8, 19, 48, 9, 90};
    int n = 6;
    printarr(a, n);
    insersion_sort(a, n);
    printarr(a, n);
    return 0;
}
