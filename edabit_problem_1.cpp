#include<bits/stdc++.h>
#define bst           (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define bug(x)        cerr<<#x<<'='<<x<<endl;
#define lp(i,a,b)     for(int i=a; i<=b; i++)
#define ll            long long int
#define eb            emplace_back
#define pb            push_back
#define inp(n)        scanf("%lld", &n)
using namespace std;

int addition(int firstNumber, int secondNumber) {
    int result;
    return result = firstNumber + secondNumber;
}

int main() {
    int firstNumber, secondNumber, result;

    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "\n";
    cout << "Enter second number: ";
    cin >> secondNumber;
    cout << "\n";

    result = addition(firstNumber, secondNumber);
    cout << "The sum of two number: ";
    cout << result;
}
