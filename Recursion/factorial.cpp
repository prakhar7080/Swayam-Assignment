#include<bits/stdc++.h>
using namespace std;
long long factorial(int n){
    if(n < 0) return -1;
    if(n <= 1) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    long long fact = factorial(n);
    if(fact == -1) cout<<"Factorial is undefined for negative number";
    else cout<<"Factorial of "<<n<<" is : "<<fact;
}
