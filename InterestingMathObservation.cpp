#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 50
void minInteger(long long int b,long long int n){
    long long int i,j=0,k=0,x=0;
    long long int digits[MAX];
    if(n<b){
        if(b!=10) cout<<n;
        else cout<<(n+10);
           return;
         }
    for(i=b-1;i>1;i--)
        while(n%i==0){
            n=n/i;
            digits[j]=i;
            j++;
        }
     if (n > b){
        cout<<"impossible";
        return;
    }
    if(n!=10){
            for(i=0;i<j;i++)
                x+=digits[i]*pow(b,i);
                cout<<x;   
    }
    else{
        for(i=j-1; i>=0; i--)
            cout<<digits[i];
    }
}

int main() {
   long long int b,n;
    cin>>b>>n;  
    minInteger(b,n);
    return 0;
}

