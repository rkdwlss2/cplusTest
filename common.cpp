////
//// Created by 강명진 on 2023/05/11.
////
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    string answer = "";
//    int num = INT_MAX;
//    vector<string> vec;
//    for (int i = 0 ; i<n;i++){
//        string s;
//        cin>>s;
//        vec.push_back(s);
//        num = min(num,(int)s.size());
//    }
//    for (int i = 0 ; i < num ;i++){
//        string tmp = "";
//        for (auto now : vec){
//            tmp+=now[i];
//        }
//
//        int cnt = std::count(tmp.begin(), tmp.end(),tmp[0]);
//        if (cnt==n) answer+=tmp[0];
//        else break;
//    }
//    cout<<answer<<'\n';
//
//}