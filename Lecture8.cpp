//FUNCTIONS :-
//1. Divide and Conquer    2.Reuse   3.Abstraction   
//4.Improve readability of code    5.reduces size of code

//What is a Function?
//A program segment that carries out some specific, well-defined task


#include<iostream>
using namespace std;

void printstuff()   //there are no parameters 
	{
		cout<<"Writing my first function"<<endl;
	}
	
int sum(int a, int b)
	{
		int c;
		c = a+b;
		
		return c;
	}
	
int main()
	{
		printstuff();
		
		int a=3;
		int b=5;
		int add_sum;
		
		add_sum = sum(a,b);
		cout<<add_sum;
		
		return 0;
	}
