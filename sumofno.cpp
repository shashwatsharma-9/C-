#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter sum numbers:";
    cin>>a;
    int i=1;
    int sum=0;
    while(i<=a){
        sum=sum+i;
        i=i+1;
        
    }
    cout<<"your sum is:"<<sum<<endl;
   

    return 0;
}
