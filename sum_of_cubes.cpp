#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum=0;
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        sum+=pow(i,3);
    }

    cout<<sum;

}