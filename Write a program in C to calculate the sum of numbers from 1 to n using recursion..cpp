//2.	Write a program in C to calculate the sum of numbers from 1 to n using recursion.
#include <iostream>
using namespace std;
int sum(int n){
	if(n == 0){
		return 0;
	}
	return n+sum(n-1);

}
int main(){
	int n;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	cout<<"The sum of first "<< n <<" number is "<<sum(n)<<endl;
	
	
}