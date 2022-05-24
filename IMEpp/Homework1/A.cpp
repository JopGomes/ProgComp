#include <bits/stdc++.h>
using namespace std;

int main()
{
   set<int> vetor;
   int n, k;
   scanf("%d", &n);
   for (int i = 0; n > i; i++)
   {
      scanf("%d", &k);
      if (vetor.count(k) != 0)
      {
      }
      else
      {
         vetor.insert(k);
      }
   }
   if (vetor.size() != 1)
   {
      set<int>::iterator it = vetor.begin();
      it++;
      printf("%d", *it);
   }
   else
   {
      printf("NO");
   }
}