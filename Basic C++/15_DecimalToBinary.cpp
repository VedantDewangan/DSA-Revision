#include<iostream>
using namespace std;

int decimalToBinary1(int num){
    int ans = 0;
    int multi = 1;
    while(num>0){
        int digit = num%2;
        ans = ans + digit * multi;
        multi = multi *10;
        num = num/2;
    }
    return ans;
};

int decimalToBinary2(int num){
     int ans = 0;
    int multi = 1;
    while(num>0){
        int digit = num & 1;
         ans = ans + digit * multi;
        multi = multi *10;
        num = num >> 1;
    }
    return ans;
}

int main(){
    
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    
    cout<<decimalToBinary1(num)<<endl;
    cout<<decimalToBinary2(num)<<endl;
    
    return 0;
}
