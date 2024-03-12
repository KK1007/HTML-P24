#include<iostream>
using namespace std;
int main(){
                    int Arr[5]={10,5,6,3};
                    int *p= Arr;
                    cout<<p<<"\n" ;
                    cout<<Arr<<"\n";
                    cout<<&Arr[0];
                    return 0;
}