////
//// Created by 강명진 on 2023/05/13.
////
//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> v;
//int answer[100001];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    for (int i = 0;i<n;i++){
//        int tmp;
//        cin>>tmp;
//        v.push_back(tmp);
//    }
//
//    for (int i = n-1 ;i>=0;i--){
//        int now = v[i];
//        for (int j = i-1 ;j>=0;j--){
//            int next = v[j];
//            if (next>now){
//                for (int k =i;k>=j+1;k--){
//                    int nextN = v[k];
//                    if (k!=i&&now>=nextN){
//                        j=k;
//                        break;
//                    }
//                    answer[k]=j+1;
//                }
//                i-=(i-j-1);
//                break;
//            }
//        }
//    }
//    for (int i =0;i<n;i++){
//        cout<<answer[i]<<' ';
//    }
//}
