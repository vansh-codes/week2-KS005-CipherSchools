#include<iostream>
using namespace std;

//1 byte = 8 bits
int main()
	{
		int a;
		long long int b;
		float c;
		cout<<"The size of int is: "<<sizeof(a)<<endl;
		cout<<"The size of long long int is: "<<sizeof(b)<<endl;
		cout<<"The size of float is: "<<sizeof(c)<<endl;
		
		//address is represented in Hexadecimal
		//address always represent first bit of the data
		cout<<"The address of a is: "<<&a<<endl;
		cout<<"The address of b is: "<<&b<<endl;
		cout<<"The address of c is: "<<&c<<endl;
		return 0;
	}
