#include<iostream>
#include<cmath>
#define ll long long

using namespace std;

bool checkPrime(ll int n) {
    for(ll int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;    
}

int main() {
    ll int num;
    cin >> num;

    ll int sum = 0;
    for(ll int i = 2; i <= num; i++) {
        if(checkPrime(i) == 1) { 
            //cout << i << " ";
            sum += i;
        }
        else {
            continue; 
        }
    }
    cout << "\n";
    cout << "Total is " << sum << endl; 
    return 0;
