#include<iostream>
using namespace std;

void printHi()
	{
		cout<<"Hi"<<endl;
		return;
	}
	
 
//variables declared inside function are local variables
int sum(int a, int b)   //these are formal parameters
	{
		int c;
		c= a+ b;  //c = 10 here
		cout<<"The value of c is: "<<c<<endl;
		return c;	
	}

//void swap(int a, int b)     //passing by value
void swap(int &a, int &b)     //passing by reference
	{
		int c=a;
		a=b;
		b=c;
		cout<<"The values of a and b after swapping inside the function are: "<<a<<" "<<b<<endl;
	}

int main()
	{
		printHi();   //first calling printHi function
		
		
		int a,b;
		a=4;
		b=6;
		
		int d;
		d=sum(a,b);   //second call of sum function using actual parameters
		cout<<"The sum is equal to: "<<d<<endl<<endl;
		
		
		int c = 75;
		cout<<"The value of c is: "<<c<<endl<<endl;
		
		
//		swap(a,b);
//		cout<<"The values of a and b after swapping outside the function are: "<<a<<" "<<b<<endl<<endl;
		
		
		cout<<"Passing by reference:-"<<endl;
		swap(a,b);
		cout<<"The values of a and b after swapping outside the function are: "<<a<<" "<<b<<endl;		
		return 0;
		
	}
