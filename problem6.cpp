#include<iostream>
#include<cmath>

using namespace std;
 

int sumOfSquareNumber() {
    int ans = 0;
    for(double i = 1; i <= 100; i++) {
        int squareOfI = (int)(pow(i, 2) + 0.5);
        ans = ans + squareOfI;
    }
    return ans;
}

int squareOfSumOfNumber() {
    int res = 0;
    double val = 0.0;
    for(double j = 1; j <= 100; j++) {
        val = val + j;
    }
    res = (int)(pow(val,2));
    return res;
}

int main() {

    int num1 = sumOfSquareNumber();
    int num2 = squareOfSumOfNumber();
    
    cout << num1 << " " << num2 << endl;
    
    cout << "Difference is " << (num2 - num1) << endl;
    return 0;
}
