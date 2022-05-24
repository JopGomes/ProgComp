#include <bits/stdc++.h>
using namespace std;

int main()
{
    int contador = 0;
    string contest;
    string daniel("Danil"), olya("Olya"), slava("Slava"), ann("Ann"), nikita("Nikita");
    cin >> contest;
    size_t foundD = contest.find(daniel);
    size_t foundO = contest.find(olya);
    size_t foundS = contest.find(slava);
    size_t foundA = contest.find(ann);
    size_t foundN = contest.find(nikita);
    if ((foundD != string::npos))
    {
        contador++;
        size_t foundD2 = contest.find(daniel, foundD + 1);
        if ((foundD2 != string::npos))
        {
            contador++;
        }
    }
    if ((foundO != string::npos))
    {
        contador++;
        size_t foundO2 = contest.find(olya, foundO + 1);
        if ((foundO2 != string::npos))
        {
            contador++;
        }
    }
    if ((foundA != string::npos))
    {
        contador++;
        size_t foundA2 = contest.find(ann, foundA + 1);
        if ((foundA2 != string::npos))
        {
            contador++;
        }
    }
    if ((foundN != string::npos))
    {
        contador++;
        size_t foundN2 = contest.find(nikita, foundN + 1);
        if ((foundN2 != string::npos))
        {
            contador++;
        }
    }
    if ((foundS != string::npos))
    {
        contador++;
        size_t foundS2 = contest.find(slava, foundS + 1);
        if ((foundS2 != string::npos))
        {
            contador++;
        }
    }
    if (((foundD != string::npos) || (foundO != string::npos) || (foundA != string::npos) || (foundS != string::npos) || (foundN != string::npos)) && contador == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
