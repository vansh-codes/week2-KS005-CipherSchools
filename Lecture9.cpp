#include<iostream>
using namespace std;

//SINGLE RETURN TYPE
/*int compare(int a, int b)  //compare 2 integers and return the greatest
	{
		int c;
		
		if(a>b)
			{
				c = a;
			}
		else
			{
				c = b;
			}
		//Now c will store the maximum of a,b
		
		return c;
	}
*/	

int compare(int a, int b)
	{	
		if(a>b)
			{
				return a;
			}
		else
			{
				return b;
			}
	}

int sum(int, int);   //function declaration so that compiler knows it exists

int main()
	{
		int a = 5;
		int b = 3;
		int greatest;
		greatest = compare(a,b);
		cout<<"Greatest : "<<greatest<<endl;
		cout<<"Greatest: "<<compare(3,5)<<endl;   //direct value passed 
		
		cout<<"Sum: "<<sum(a,b)<<endl;
		cout<<"Sum: "<<sum(5,5)<<endl;    //direct values passed
		return 0;
	}
	
int sum(int a, int b)
	{
		return a+b;
	}

