#include <iostream>
using namespace std;
int main(){
    int n;
    
    
    cout << "Enter an integer: ";
    cin >> n;
    
  
    if (n > 0){
        cout << "The absolute value of the entered number = " << n;
    }
    else{
        cout << "The absolute value of the entered number = " << -(n);
    }
    return 0;
}