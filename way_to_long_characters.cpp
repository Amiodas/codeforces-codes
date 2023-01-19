
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
    std::string words[100];
    int numberOfWords;
    string temp;
    cin >> numberOfWords;

    for(int i = 0; i < numberOfWords; i++) {
        std::cin >> words[i];
    }
    for(int i = 0; i < numberOfWords; i++) {
        if(words[i].length() > 10) {
            for(int k = 0; k < words[i].length(); k++) {
                temp = words[i];
            }
            std::cout << temp[0] <<words[i].length() - 2 << temp[temp.length()-1] << "\n";
        } else {
            std::cout << words[i] << "\n";
        }

    }


}
