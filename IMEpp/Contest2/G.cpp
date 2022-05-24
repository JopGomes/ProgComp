#include <bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    if(C==1){
        if(B-1>=A && A>0 && B>0){
            cout << "Aoki";
        }
        else if(A>0 && B>0){
            cout <<"Takahashi";
        }
        if(B==0){
            cout <<"Takahashi";
        }else if(A==0){
            cout<< "Aoki";
        }
    }
    if(C==0){
        if(A-1>=B && A>0 && B>0){
            cout <<"Takahashi";
        }
        else if(A>0 && B>0){
            cout<< "Aoki";
        }
        if(A==0){
            cout <<"Aoki";
        }
        else if(B==0){
            cout <<"Takahashi";
        }
    }
}