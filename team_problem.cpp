
#include<bits/stdc++.h>
#define bst           (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define bug(x)        cerr<<#x<<'='<<x<<endl;
#define lp(i,a,b)     for(int i=a; i<=b; i++)
#define ll            long long int
#define eb            emplace_back
#define pb            push_back
#define inp(n)        scanf("%lld", &n)
using namespace std;

int main() {

    int petya, vasya, tonya, questionNumbers, solvedProblem = 0, result;

    cin >> questionNumbers;

    for (int i = 0; i < questionNumbers; i++) {
        cin >> petya >> vasya >> tonya;
        if(petya == 1 && vasya == 1 || petya == 1 && tonya == 1 || vasya == 1 && tonya == 1 || petya == 1 && vasya == 1 && tonya == 1) {
            solvedProblem = solvedProblem + 1;
        }
    }
    cout << solvedProblem;

}

