//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n,m;
//vector<int> v;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i < n;i++){
//        int tmp;
//        cin>>tmp;
//        v.push_back(tmp);
//    }
//    sort(v.begin(),v.end());
//    int en=0;
//    int MAX = 2000000001;
//    for (int st = 0 ; st<n;st++){
//        while(en<n&&v[en]-v[st]<m)en++;
//        if (en==n)break;
//        MAX = min(MAX,v[en]-v[st]);
//    }
//    cout<<MAX<<'\n';
//
//    return 0;
//}
