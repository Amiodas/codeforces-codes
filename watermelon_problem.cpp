
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
    int watermelonWeight;

    cin >> watermelonWeight;

    if(watermelonWeight > 2 && watermelonWeight %2 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
