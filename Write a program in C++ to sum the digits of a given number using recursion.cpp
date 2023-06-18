//5.	Write a program in C++ to sum the digits of a given number using recursion
#include <iostream>
using namespace std;
int sum(int n){
	if(n==0){
		return 0;
	}
	return  n % 10 + sum(n / 10);
}

int main(){
	int n;
	cout<<"Enter any number of more than one digit"<<endl;
	cin>>n;
	cout<<sum(n);
}