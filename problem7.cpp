#include<iostream>

using namespace std;

bool isPrime(int N) {
    for(int i = 2; i <= N-1; i++) {
        if(N % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int n;
    cin >> n;

    int count = 0;
    int i = 2;
    while(true) { //infinite loop
        if(isPrime(i)) {
            count++;
        }
        if(count == n) {
            cout << i << endl;
            break;
        }
        i++;
    }
    return 0;
}
