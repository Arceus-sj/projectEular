#include<iostream>
#include<cmath>
#define ll long long

using namespace std;

void largestPrimeFactor(ll int num) {
    for(int i = 2; i <= sqrt(num); i++) {
        
            if(num % i == 0) {
                while(num % i == 0) {
                    num = num / i;
                }
                cout << i << " ";
            }
    }
    if(num != 1)
        cout << num << " " ;
}

int main() {
    
    ll int number;
    cin >> number;

     
    largestPrimeFactor(number);
    return 0;
}
