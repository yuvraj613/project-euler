#include<bits/stdc++.h>
using namespace std;

void fibbo(int a, int b , int limit, int sum){
    if(a<=limit && a%2==0){
        sum+=a;
    }
    if(a>4000000) {
        cout<<sum;
        return;
    }

    return fibbo(b,a+b,limit,sum);

}

int main(){
    int a =1;
    int b=2;
    int limit = 4000000;
    int sum=0;
    fibbo(a,b,limit,sum);



    return 0;
}