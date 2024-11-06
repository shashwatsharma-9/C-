#include<iostream>
using namespace std;
 int BinaryToDec(int BinNum){
     int ans=0,pow=1;
     
     while(BinNum>0){
         int rem=BinNum%10;
         ans+=(rem*pow);
         BinNum/=10;
         
        
         pow*=2;
     }
     return ans;
 }
 
 int main(){
     int BinNum=1010;
     
     cout<<BinaryToDec(BinNum);
     return 0;
 }
