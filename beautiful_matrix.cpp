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
    int array[5][5], position;
    for(int row = 0; row < 5; row++) {
        for(int col = 0; col < 5; col++) {
            cin >> array[row][col];
        }
    }
    for(int row = 0; row < 5; row++) {
        for(int col = 0; col < 5; col++) {
            if(array[row][col] == 1) {
               position = abs(row - 2) + abs(2 - col);
               cout << position;
            }
        }
    }
}
