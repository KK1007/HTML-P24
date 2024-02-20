#include<iostream>
using namespace std;
int main()
{
                    // int a[5];
                    // a[0]=23;
                    // a[1]=3;
                    // a[2]=65;
                    // a[3]=90;
                    // a[4]=10;
                    // for(int i=0;i<5;++i)
                    // {
                    //                     cout<<a[i]<<"\n";
                    // }

                    int a[5]={1,2,3,4,5};
                    int k=sizeof(a)/sizeof(a[0]);
                    // cout<<"enter values\n";
                    
                    // for(int i=0;i<=5;++i){
                    //                     cin>>a[i];
                                        
                    // }
                     for(int i=0;i<=5;++i){
                                        
                                        cout<<(a[i]*a[i]);
                    }

}