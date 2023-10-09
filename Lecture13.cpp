#include<iostream>
using namespace std;

int main()
	{
		
		int a = 5;
		int *x;
		x=&a;
		
		cout<<"The address of a stored in pointer x is: "<<x<<endl;
		cout<<"The value of x+1 : "<<x+1<<endl;
		cout<<"The value of x+2 : "<<x+2<<endl;
		
		
		int b[5];  //array elements are stored continuously in memory
		int *p;
		
		p = &b[0];
		int i;
		for(i=0;i<6;i++)
			{
				cout<<&b[i]<<endl;
			}
			
		return 0;
	}
