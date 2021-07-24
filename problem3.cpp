#include<iostream>
#define ll long long

using namespace std;

bool isPrime(int n) {
    for(int i = 2; i <= n - 1; i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;    
}

 
void largestPrimeFactor(ll int num) {
    for(int i = 2; i <= num; i++) {
        if(isPrime(i)) {
            if(num % i == 0) {
                while(num % i == 0) {
                    num = num / i;
                }
                cout << i << " ";
            }
        }
    }
}

int main() {
    
    ll int number;
    cin >> number;

    largestPrimeFactor(number);
    return 0;
}
