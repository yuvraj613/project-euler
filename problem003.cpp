#include<bits/stdc++.h>
using namespace std;

bool checkPrime(long long n){
    bool res = false;
    long long cnt = 0;

    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0){
            cnt++;
            if(n / i != i) cnt++;
        }
    }

    if(cnt == 2) return true;

    return false;
}

int main(){
    long long n;
    cin >> n;

    vector<long long> arr;

    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0){
            arr.push_back(i);

            if(n / i != i)
                arr.push_back(n / i);
        }
    }

    long long maxPrime = -1;

    for(long long x : arr){
        if(checkPrime(x)){
            maxPrime = max(maxPrime, x);
        }
    }

    cout << maxPrime;

    return 0;
}