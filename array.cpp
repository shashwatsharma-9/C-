#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<"Value at index is:"<<arr[i]<<endl;
    }
     cout<<"Value Done"<<endl;
}

 int main(){
     int number[15]={1,2,3};
     printarray(number,15);
     return 0;
 }
