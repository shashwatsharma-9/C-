#include <iostream>
using namespace std;
int main(){
    int n;
    int row;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(row=0;row<n;row++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
