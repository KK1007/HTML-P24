#include<iostream>
using namespace std;
int main(){
                    int a[5]={5,8,12,47,2};
                     int k=sizeof(a)/sizeof(a[0]);
                     int s=a[0];
                     for(int i=0;i<k;++i){
                            if(s>a[i]){
                                        s=a[i];
                            } 
                    }
                     cout<<s;
}