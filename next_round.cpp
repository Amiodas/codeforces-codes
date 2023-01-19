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
    int array[100];
    int k, n, count = 0;

    cin >> k >> n;
    for (int i = 0; i < k; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < k; i++) {
        if(array[i] > n){
            count = count + 1;
        }
    }

    cout << count;
}
