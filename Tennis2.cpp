#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    string s;
    for(int j=1;j<=t;j++){
        cin>>s;
        int p1=0,p2=0,g1=0,g2=0;

        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='1')
                p1++;
            else p2++;
            if(p1>=4 && p1>=p2+2){
                p1=0;
                p2=0;
                g1++;
            }
            else if(p2>=4 && p2>=p1+2){
                p1=0;
                p2=0;
                g2++;
            }
        }
        cout<<"Player 1 : "<<g1<<" games"<<endl<<"Player 2 : "<<g2<<" games"<<endl;
            if(g1>=6 && g1>=g2+2) cout<<"Player 1 wins";
            else if(g2>=6 && g2>=g1+2) cout<<"Player 2 wins";
            else cout<<"Draw";
        cout<<endl;
    }
    
    return 0;
}

