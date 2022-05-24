#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 1e6 + 5;

int n;
ll x;
bool composite[N];
set<ll> t_primes;

void crivo(){
	for(ll i = 2; i < N; i++){
    	if(composite[i])
			continue;
    	for(ll j = i * i; j < N; j += i)
			composite[j] = true;

		t_primes.insert(i * i);
	}
}

int main(){
	crivo();
    
    scanf("%d", &n);
    while(n--){
    	scanf("%lld", &x);
    	if(t_primes.find(x) == t_primes.end())
			printf("NO\n");
    	else
			printf("YES\n");
	}
    return 0;
}