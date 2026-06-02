#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int original = n;
    int new_num=0 ;
    while(n>0){
        int rem = n%10;
        new_num=new_num*10 + rem;
        n/=10;
    }
    if(original==new_num) return true;

    return false;
}

int main(){
    int largest=-1;
    int product;
    for(int i=999;i>=100;i--){
        for(int j=999;j>=100;j--){
            int product = i*j;
            if(isPalindrome(product)){
                largest=max(product,largest);
            }
        }
        
    }
    cout<<largest;


    return 0;  
}