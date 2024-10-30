#include <iostream>
using namespace std;

int main() {
    int n=4;
    for(int i=0;i<n;i++){
        for(int l=0;l<n-i-1;l++){ 
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        for(int k=i;k>0;k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}
