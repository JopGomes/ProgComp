#include <bits/stdc++.h>
using namespace std;

const int n=30;
int E=0;
int total=0;
int seats[n][4];
int main(){
    int N,count;
     
    string S;
    cin >> N;
    int L=N-1;
    int Le=N-1;
    cin >> S;
    for(int i=0;S.size()>i;i++){
        count=0;
        if(S[i]=='I'){
            if(L>Le){L=Le;}
           while(L>-1){
               if(!seats[L][0]){
                    seats[L][0]++;
                    total+=(L)*2+10;
                    count++;
                    break;
                }
                else if(!seats[L][3]){
                    seats[L][3]++;
                    total+=(L)*2+10;
                    L--;
                    count++;
                    break;
                }
                L--;
           }
        }
        if(count){continue;}
        while(true){
            if(!seats[Le][0]){
                seats[Le][0]++;
                total+=(Le)*2+10;
                count++;
                break;
            }
            else if(!seats[Le][3]){
                seats[Le][3]++;
                total+=(Le)*2+10;
                count++;
                break;
            }
            else if(!seats[Le][1]){
                seats[Le][1]++;
                total+=(Le)*2+5;
                count++;
                break;
            }
            else if(!seats[Le][2]){
                seats[Le][2]++;
                total+=(Le)*2+5;
                count++;
                Le--;
                break;
            }
            Le--;
        }
    }
    cout << total;
}