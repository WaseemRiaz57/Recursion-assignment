//3.	Write a program to find the factorial of a number.
#include <iostream>
using namespace std;
int calFact(int n){
	if(n<2){
		return 1;
	}
	return n*calFact(n-1);
}
int main()
{
	int num;
	cout<<"Enter the value of num"<<endl;
	cin>>num;
	cout<<"The factorial of "<<num<<" is : "<<endl;
	cout<<calFact(num);
}