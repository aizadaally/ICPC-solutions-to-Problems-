//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//
//    vector<vector<int>> adjMatrix(n + 1, vector<int>(n + 1));
//
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            cin >> adjMatrix[i][j];
//        }
//    }

//    vector<vector<int>> adjLists(n + 1);
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (adjMatrix[i][j] == 1) {
//                adjLists[i].push_back(j);
//            }
//        }
//    }

//    for (int i = 1; i <= n; i++) {
//        // print adjLists[i]
//        cout << adjLists[i].size();
//        for (int neighbor: adjLists[i]) {
//            cout << " " << neighbor;
//        }
//        cout << endl;
//    }
//
//    return 0;
//}



//#include<vector>
//#include <iostream>
//using namespace std;
//int main (){
//    int N;
//    int S;
//    cin >>N >>S;
//    S--;
//    vector<vector<int>> adjMatrix(N + 1, vector<int>(N + 1));
//    int counter =1;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            cin >> adjMatrix[i][j];
//        }
//    }
//}
//
//
//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main()
//{
//    int n;
//    int s;
//    cout<<"Вводите n и s(через пробел): ";
//    cin>>n>>s;
//    s--;
//    int matrix[n][n];
//    stack<int> st;
//    int counter=1;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cin>>matrix[i][j];
//        }
//    }
//    for(int j=0;j<n;j++)
//    {
//        if(matrix[s][j] == 1){
//            st.push(j);
//        }
//    }
//    matrix[s][s]=1;
//    while(!st.empty())
//    {
//        int a=st.top();
//        st.pop();
//        if(matrix[a][a]!=1)
//        {
//            for(int j=0;j<n;j++)
//            {
//                if(matrix[a][j] == 1){
//                    st.push(j);
//                }
//            }
//            counter++;
//            matrix[a][a]=1;
//        }
//    }
//    cout<<"Количество вершин:"<<counter<<endl;
//    // cout<<endl;
//    // cout<<"Матрица после: "<<endl;
//    // for(int i=0;i<n;i++)
//    //  {
//    //  for(int j=0;j<n;j++)
//    //      {
//    //          cout<<matrix[i][j]<<" ";
//    //      }
//    //      cout<<endl;
//    // }
//    return 0;
//}

//Graphs
#include <iostream>
#include <algorithm>
#include <vector>
//using namespace std;
//bool * used;
//vector<int>*g;
//int DFS(int V){
//    used[V]=true;
//    int cnt=1;
//    for(auto i:g[V]){
//        if(!used[i]){
//            cnt+=DFS(i);
//        }
//    }
//    return cnt;
//}
//int main(){
//    int n,k,v;
//    cin >> n >> v;
//    v--;
//    used = new bool[n];
//    for(int i=0; i<n; i++) used[i]=false;
//    g=new vector<int>[n];
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            cin >> k;
//            if(k==1) {
//                g[i].push_back(j);
//            }
//        }
//    }
//    cout << DFS(v);
//
//}
//
//
//
//#include<iostream>
//#include <vector>
//
//using namespace std;
//int main();{
//
//
//}
//
//
//
//
