//
// Created by 강명진 on 2023/05/13.
//
#include <iostream>
#include <vector>
using namespace std;
int n,m,t,s;
vector<int> x;
vector<int> y;
int main(){
    int Max = INT8_MIN;
    cin>>m>>n>>t>>s;
    for (int i=0;i<t;i++){
        int tx,ty;
        cin>>ty>>tx;
        x.push_back(tx);
        y.push_back(ty);
    }

    for (int i = 0 ; i < x.size();i++){
        for (int j =0;j<y.size();j++){
            int cnt = 0;
            int nx = x[i];
            int ny = y[j];
            for (int k =0;k<t;k++){
                if (x[k]>=nx&&x[k]<=nx+s){
                    if(y[k]>=ny&&y[k]<=ny+s){
                        cnt++;
                    }
                }
            }
            Max = max(Max,cnt);

        }
    }
    cout<<Max<<'\n';
}