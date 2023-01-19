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
    int testCase, participants, participantsExpectations[50];

    cout << "Test Case Number: ";
    cin >> testCase;

    for(int t = 0; t < testCase; t++) {
        cout << "Participants Game: ";
        cin >> participants;
        for(int k = 0; k < participants; k++) {
             cout << "Number " << k+1 << " participants expectation: ";
            cin >> participantsExpectations[k];
        }
    }

    for(int k = 0; k < participants; k++) {
        for(int i = 0; i < participants; i++) {
            for(int j = 0; j < participants; j++) {
                if(i == j) {
                    cout << "X";
                } else {
                    cout << "=";
                }
            }
            cout << "\n";
        }
    }
}
