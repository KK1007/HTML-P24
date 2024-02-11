#include<iostream>
using namespace std;
int main()
{
   int i,a;
   cout<<"enter the number";
   cin>> a;
  for( i=1; i<=a/2; i++);{
                    if(i*i==a)
                    {
                                        cout<<i;
                    }
                    else{
                                       cout<<"not valid";
                    }
  }            
} 
