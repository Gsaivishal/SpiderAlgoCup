#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MIN(A,B) (A<B?A:B)

int main(){
    int n,a,b,i;
    cin>>n>>a>>b;
    vector<int> F(n+1);
    F[1]=0;
    F[2]=1;
    for(i=3;i<=n;i++){
        if(i-a>1)
            F[i]=F[i-a]+1;
        else
            F[i]=F[i-1];
        if(i%b==0)
            F[i]=MIN(1+F[i/b],F[i]);
    }
    cout<<F[n];
    return 0;
}
