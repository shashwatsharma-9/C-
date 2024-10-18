#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter your desired number:\n";
    cin>>n;
    int i=2;
    
    while(i<n){
        if(n%i==0){
            cout<<"System hang: Not Prime\n";
            i=i+1;
            break;
        }
        else{
            cout<<"Your no is prime\n";
            break;
        }
    }
  
    return 0;
}
