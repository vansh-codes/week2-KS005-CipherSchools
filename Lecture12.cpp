#include<iostream>
using namespace std;

//Pointer is used to store address
int main()
	{
		int a=24;
		cout<<"The address of a: "<<&a<<endl;
		
			
		//Syntax: datatype *variableName
		int *p;
		p=&a;
		
		int b;
		int c;
		int *q;
		q = &b;
		b=5;
		//indirection operator *
		*p=12;
		c = *p + *q;
		
		cout<<"The value of a is (from the actual variable type):  "<<a<<endl;
		cout<<"The value of a is (from the pointer type):  "<<*p<<endl;
		cout<<"The value of c is (from the actual variable type):  "<<c<<endl;	
		
		
		
		return 0;
	}
