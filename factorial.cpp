#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if (n<=1)
    return 1;
else{
    return n * factorial(n-1);
}
}
int main()
{
    int n;
    cout<<"Enter number to find factorial : "<<endl;
    cin>>n;
    cout<<"Factorial of number "<<n<<" is  : "<<factorial(n)<<endl;
    return 0;
}