#include<iostream>

using namespace std ;

int main()
{
	int firstNum = 1, secondNum = 2 ;
	int n;
	cin>>n;
	// cout<<firstNum<<" "<<secondNum<<" ";
	int finalVal = firstNum+secondNum;
	int totalSum = 2;
	while(finalVal <= n){
		if(finalVal%2==0){
		// cout<<finalVal<<" ";
		totalSum += finalVal; 

		}
		firstNum = secondNum;
		secondNum = finalVal;
		finalVal = firstNum + secondNum;
	}
	cout<<endl;
	cout<<"Total is: "<<totalSum<<endl;
	return 0;
}
