#include <iostream> 
using namespace std; 
  

int main()
{ 
   char x;
   cout<<"enter variable\t";
   cin>>x;
    if (x == 'a' || x == 'e' || x == 'i' ||  x == 'o' || x == 'u' || x == 'A' ||   x == 'E' || x == 'I' || x == 'O' || x == 'U') 
       { 
                    cout << "Vowel"; 
       }
    else
    {
        cout << "Consonant"; 
    }
} 