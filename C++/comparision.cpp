#include<iostream>

using namespace std;

int main()
{
	int x, y;
	
	cout << "Please enter the Two Different Number  = ";
	cin >> x >> y;
	
	if(x > y)
	{
    	cout << x << " is Greater Than " << y;  
	}         
	else if(y > x)
	{
		cout << y << " is Greater Than " << x;  
  	}
  	else
  	{
  		cout << "Both are Equal";
	}
 	return 0;
}