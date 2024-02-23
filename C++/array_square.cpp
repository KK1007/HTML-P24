#include<iostream>
using namespace std;
int main(){
                    int a[3][3]={1,2,3,4,5,6,7,8,9};
                    int sum=0;
                    for(int r=0;r<=2;++r)
                    {
                         for(int c=0;c<=2;++c) 
                         {
                           if(a[r][c]%2!=0){
                                       sum=sum+a[r][c];
                                       cout<<sum;
                           }
                           
                         }               
                    }
}