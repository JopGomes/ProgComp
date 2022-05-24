#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &vec, int Tesq, int Tdir, int pivot, int k)
{
    vector<int> temp(Tdir - Tesq + 1);
    int esq = Tesq;
    int i = 0;
    int dir = pivot;
    while (pivot > esq && dir <= Tdir)
    {
        if (vec[esq] > vec[dir])
        {
            temp[i++] = vec[dir++];
        }
        else
        {
            temp[i++] = vec[esq++];
        }
    }
    while (pivot > esq)
    {
        temp[i++] = vec[esq++];
    }
    while (dir <= Tdir)
    {
        temp[i++] = vec[dir++];
    }
    for (int i = Tesq; Tdir >= i; i++)
    {
        vec[i] = temp[i - Tesq];
    }
}
void mergeSort(vector<int> &vec, int esq, int dir, int k)
{
    int pivot = esq + (dir - esq) / 2;
    if (esq == dir)
        return;
    mergeSort(vec, esq, pivot, k);
    mergeSort(vec, pivot + 1, dir, k);
    merge(vec, esq, dir, pivot + 1, k);
}
int main()
{
    int n, k, j = 0;
    vector<int> permuta{3, 5, 1, 2, 5, 6, 1, 2};
    n = permuta.size();
    k = 1;
    for (int i = 0; n > i; i++)
    {
        cout << permuta[i];
    }
    cout << "\n";
    mergeSort(permuta, 0, n - 1, k);
    for (int i = 0; n > i; i++)
    {
        cout << permuta[i];
    }
}