////
//// Created by 강명진 on 2023/05/11.
////
//#include <iostream>
//#include <vector>
//using namespace std;
//int n,m,t,s;
//vector<pair<int,int>> vec;
//
//int Check(int num){
//    int ret = INT_MIN;
//    int x = vec[num].first;
//    int y = vec[num].second;
//    for (int i = x-s;i<=x;i++){
//        for (int j = y-s;j<=y;j++){
//            if (!((i==x&&j!=y)||(i!=x&&j==y)))continue;
//            int nx = i+s;
//            int ny = j+s;
//            if (i<0||i>=n||j<0||j>=m)continue;
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            int cnt = 0;
//            for (int l = i;l<=nx;l++){
//                for (int k = j;k<=ny;k++){
//                    for (auto now : vec){
//                        int ax = now.first;
//                        int ay = now.second;
//                        if (l==ax&&ay==k){
//                            cnt++;
//                            break;
//                        }
//                    }
//                }
//            }
//            ret = max(ret,cnt);
//        }
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>m>>n>>t>>s;
//
//    for (int i = 0 ;i<t;i++){
//        int x,y;
//        cin>>y>>x;
//        vec.push_back({x-1,y-1});
//    }
//    int answer = INT_MIN;
//    for (int i = 0;i<vec.size();i++){
//        int now = Check(i);
//        answer = max(now,answer);
//    }
//    cout<<answer<<'\n';
//
//}