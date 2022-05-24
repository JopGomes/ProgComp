#include <bits/stdc++.h>
using namespace std;


const int N = 1e5 + 7;
 
long long phi[N];
 
void totient() {
    for(int i = 1; i < N; i++) {
        phi[i] = i;
    }
    for(int i = 2; i < N; i += 2) {
        phi[i] >>= 1;
    }
    for(int j = 3; j < N; j += 2) {
        if(phi[j] == j) {
            phi[j]--;
            for(int i = 2 * j; i < N; i += j) {
                phi[i] = phi[i] / j * (j - 1);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long int T;
    int num;
    cin >> T;
    totient();
    vector<int> ans(N);
    for(int i = 2; i < N; i++) {
        ans[i] += ans[i - 1];
        ans[i] += i - phi[i];
    }
    for (int j = 1; j<= T; j++)
    {
        cin >> num;
        cout << "Case " << j << ": " << ans[num]<< "\n";
    }
}