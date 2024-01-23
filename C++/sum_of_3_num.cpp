#include<iostream>
using namespace std;
int main(){
       int a;
       cout<<"enter a three digit number\t";
       cin>>a;
       cout<<"\nsum of three digit number ="<< a%100%10+ a%100/10+ a/100;
       return 0;
}