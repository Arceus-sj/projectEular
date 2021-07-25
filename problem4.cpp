#include<iostream>
#include<cstring>
 +
using namespace std;

bool isPalindrome(int n) {
    //convert integer into string using to_string() function
    string s = to_string(n);

    int strLength = s.length();
    int l = s.length() - 1;
    
    if(strLength % 2 == 0) { //even STRING
        for(int i = 0; i < strLength / 2; i++) {
            if(s[i] == s[l]) {
                // cout << s[i] << " " << s[l] << endl;
                --l;
            }
            else {
                return false;
            }
        }
    }
    else { //odd STRING
        for(int i = 0; i < (strLength - 1) / 2; i++) {
            if(s[i] == s[l]) {
                // cout << s[i] << " " << s[l] << endl;
                --l;
            }
            else {
                return false;
            }
        }
    }
    return true;
}
 

int main() {
    int largestPalindrome = 0;    
    int product = 1;
    int num1, num2;
    for(num1 = 1; num1 < 1000 ; num1++) {
        for(num2 = 1; num2 < 1000; num2++) {
            product = num1 * num2;
            if(isPalindrome(product)) {
                if(product >= largestPalindrome) {
                    cout << num1 << " * " << num2 << endl ;
                    largestPalindrome = product; 
                }
            }
        }
    }
    

    cout << largestPalindrome << endl;

    return 0;
}

