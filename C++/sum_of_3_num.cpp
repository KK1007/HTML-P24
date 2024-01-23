#include<iostream>
using namespace std;
int main(){
     int a,b,c,d,e;
     cout<<"enter 3 digit number";
     cin>>a;
     b=a/100;
     c=a%100;
     d=c/10;
     e=c%10;
     cout<<"\nsum of given three digit number ="<<b+d+e;

     /*
     int a;
     cout<<"enter 3 digit number";
     cin>>a;
     cout<<" sum of three digit number is ="<<a%100%10 +a%100/10+a/100;
     */
}