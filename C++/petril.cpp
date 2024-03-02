#include<iostream>
using namespace std;
// int mp(){
//      int p=5;
//      return 5*108;
// }

// int mh(){
//      int p=5;
//      return 5*90;
// }

// int main()
// {
//      cout<<(mp()+mh());
// }

void mp(int lit){
                    cout<<108*lit<<"\n";
}

void mh(int lit){
                    cout<<90*lit;
}

int main(){
                    mp(5);
                    mh(4);
}