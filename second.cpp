#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Multiplication Table"<<endl;
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
return 0;
}