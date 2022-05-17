//#include <iostream>
//using namespace std;
//const int N =15;
// int dp [N+1] [N+1];
//
// int main (){
//     int n, m;
//     cin >>n>>m;
//     dp [1][1]=1;
//     for (int j = 1; j= <= m; j++){
//         for (int r =1, c =j; r< = n && c >=1; r++,  c--){
//
//
//
//         }
//     }
// }


//
//#include <iostream>
//using namespace std;
//int n,a [105][105];
//
//int main (){
//    int n, a ();
//    cin>>n>>a;
//    for (int i =1; i <=n; i++ ){
//        while (true){
//            int v;
//            char ch;
//            cin>>v;
//            a[i][v]=1;
//            scanf ("%c", &ch);
//            if (ch == '\n')
//                break;
//        }
//    }
//    for(int i= 1; i <=n; i++){
//        for (int j= i+1; j<=n; j++){
//            swap(a[i][j], a[j][i]);
//
//        }
//    }
//}

//
//#
//
//
//
//
// include <iostream>
//using namespace std;
//int main();
//int n, m;{
//cin >>n>>m
//
//for (int i = 1; i<=n; i++){
//        for (int j = 1; j <=n; j++ ){
//            if


//        }
//    }
//}
//


// B Graphs
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//
//int main(){
////    ###Keyword an integer datatype
//    int n;
//// converts n to integer
//    cin >> n;
////    reads an integer
//    vector<vector<int>> adjmatr(n +1, vector<int>(n+1));
//    for (int i = 1; i <=n; i++ ){
//        for (int j =1 ; j<= n; j++) {
//
//            cin >> adjmatr[i] [j];
//        }
//    }
//    vector<vector<int>> adlist(n+1);
//
//    for (int i = 1; i<=n; i++){
//        for (int j =1; j<=n; j++){
//            if (adjmatr[i][j] == 1) {
//                adlist[i].push_back(j);
//
////                Did not understand God please help me to understand
//            }
//
//
//
//        }
//    }
//
//    for (int i = 1; i <= n; i++){
//        cout << adlist[i].size();
//        for (int neighbor: adlist[i]){
//            cout<< " " << neighbor;
//
//        }
//        cout << endl;
//
////        print adlist[i]
//    }
//
//    return  0;
//}







// C Graph Contest

//#include <vector>
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//
//    vector<vector<int>> adjmatrix(n+1, vector<int> (n+1));
//    for(int i =1; i <= n; i++) {
//        int listlen;
//        cin >> listlen;
//
//        while (listlen--){
//            int j;
//            cin >> j;
//            adjmatrix [i][j]=1;
//        }
//    }
//
//    for (int i =1; i<=n; i++){
//        for(int j=1; j<=n; j++){
//            cout << adjmatrix[i][j]<< " \n"[j == n];
//        }
//    }
//    return 0;
//}

//D LOOPS

//#include <iostream>
//
//using namespace std;
//
//int main(){
//    int n;
//    cin >>n;
//
//    for (int i=1; i<=n; i++){
//        for(int j =1; j<=n; j++){
//            int value;
//            cin >> value;
//            if (i == j && value == 1) {
//                cout << "YES\n";
//                exit(0);
//
//
//            }
//        }
//    }
//    cout << "NO\n";
//    return 0;
//}



// # E  TRaffic lights
//#include<vector>
//#include<iostream>
//using namespace std;
//int main(){
//    int n, m;
//    cin >> n >> m;
//    vector<int> degree(n+1);
//    for (int i = 0; i< m; i++){
//        int c, d;
//        cin>>c>>d;
//        degree[c]++;
//        degree[d]++;
//
//    }
//    for (int i = 1; i<=n; i++){
//        cout << degree[i] << " \n"[i==n];
//    }
//    return 0;
//}


# include<vector>
#include <iostream>

using namespace std;
int n, m, a [105][105];
int color [105];
int main(){

    cin >>n;
    for(int i =1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];

        }

    }
    for (int i=1; i<=n; i++){
        cin >> color[i];


    }
    int s =0;

    for(int i= 1; i<=n; i++){
        for (int j=i+1; j<=n; j++){
            if (a[i][j] == 1 && color[i] != color [j]) s++;

        }
    }
    cout <<s;
}


