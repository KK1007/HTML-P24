#include<iostream>
#include<cstring>
using namespace std;
string palindrom(string s)
{
   for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i]){
                    return "not a palindrom ";
        }
        else{
                    return"palindrom";
        }
     
   }                 
}
int main()
{
                    string str;
                    cout<<"enter name";
                    cin>>str;
                    cout<<palindrom(str);
                    return 0;
}