//
// Created by 강명진 on 2023/05/13.
//
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> v;
stack<pair<int,int>> st;
int answer[100001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for (int i =0;i<n;i++){
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    for (int i =n-1;i>=0;i--){
        int num = v[i];
        while(!st.empty()){
            pair<int,int> now = st.top();
            st.pop();
            int nowIndex = now.first;
            int nowNum = now.second;
            if (nowIndex == i){
                st.push({nowIndex,nowNum});
                break;
            }
            if (nowNum<num){
                answer[nowIndex]=i+1;
            }else{
                st.push({nowIndex,nowNum});
                break;
            }
        }
        st.push({i,num});
    }
    for (int i = 0 ; i<n;i++){
        cout<<answer[i]<<' ';
    }
}