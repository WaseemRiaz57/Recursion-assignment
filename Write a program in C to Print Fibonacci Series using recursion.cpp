//4.	Write a program in C to Print Fibonacci Series using recursion
#include <iostream>
using namespace std;
int  findFabb(int n){
	if(n<2){
		return n;
	}
	return n=findFabb(n-1)+findFabb(n-2);
	
	
}
void printFabb(int n){
	for(int i=0;i<=n;i++){
		cout<<findFabb(i)<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	cout<<"The Fibbonacci series is  ; ";
	findFabb(n);
    printFabb(n);
}