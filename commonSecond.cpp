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
//    int n, Num = INT_MAX;
//    cin>>n;
//    vector<string> vec;
//    for (int i = 0;i<n;i++){
//        string tmp;
//        cin>>tmp;
//        Num=min(Num,(int)tmp.size());
//        vec.push_back(tmp);
//    }
//    string now = vec[0];
//    for (int i = 1; i<vec.size();i++){
//        while(vec[i].find(now)==string::npos){
//            now = now.substr(0,now.size()-1);
//        }
//    }
//    cout<<now<<'\n';
//}