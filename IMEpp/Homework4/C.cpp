#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int n, k, q, l, r, ps[N];

int main(){
	scanf("%d %d %d", &n, &k, &q);
	
	// +1 in l and -1 in (r + 1)
	for(int i = 0; i < n; i++){
		scanf("%d %d", &l, &r);
		ps[l]++;
		ps[r + 1]--;
	}
	
	// Prefix sum of previous array
	for(int i = 1; i < N; i++)
		ps[i] += ps[i - 1];
		
	// 1 just if ps[i] >= k
	for(int i = 0; i < N; i++)
		ps[i] = (ps[i] >= k);
		
	// Prefix sum of previous array
	for(int i = 1; i < N; i++)
		ps[i] += ps[i - 1];
		
	// Queries
	while(q--){
		scanf("%d %d", &l, &r);
		printf("%d\n", ps[r] - ps[l - 1]);
	}
	return 0;
}