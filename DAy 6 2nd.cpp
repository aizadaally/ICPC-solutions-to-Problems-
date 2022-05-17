////////# include <bits/stdc++.h>
////////using namespace std;
////////const int N = 1e5+5, inf = 1e9;
////////struct Node {
////////    int mn, mx;
////////
////////    Node (){
////////        mn = inf;
////////        mx = -inf;
////////    }
////////
////////};
////////Node t[N *4];
////////int a[N] ,k , n =1e5;
////////
////////Node combine(Node a,Node b) {
////////    Node c;
////////    c.mn = min(a.mn, b.mn);
////////    c.mx = max(a.mx, b.mx);
////////    return c;
////////}
////////
////////void build (int v= 1, int tl =1, int tr =n) {
////////    if (tl == tr) {
////////        t[v].mn = a[tl];
////////        t[v].mx = a[tl];
////////    } else {
////////
////////        int tm = (tl + tr) / 2;
////////        build(2 * v, tl, tm);
////////        build(2 * v + 1, tm + 1, tr);
////////        t[v] = combine(t[2 * v], t[2 * v + 1]);
////////    }
////////}
////////Node get (int l, int r, int v =1, int tl =1, int tr =n ) {
////////    if (r < tl || tr < l)
////////        return Node();
////////    if (l <= tl && tr <= r) {
////////        return t[v];
////////    }
////////    int tm = (tl + tr) / 2;
////////
////////    return combine(get(l, r, 2 * v, tl, tm), get(l, r, 2 * v + 1, tm + 1, tr));
////////}
////////void update (int pos, int new_val, int v =1, int tl =1, int tr =n ) {
////////    if (tl == tr) {
////////        t[v].mn = new_val;
////////        t[v].mx = new_val;
////////    } else {
////////        int tm = (tl + tr) / 2;
////////        if (pos <= tm)
////////            update(pos, new_val, 2 * v, tl, tm);
////////        else
////////            update(pos, new_val, 2 * v + 1, tm + 1, tr);
////////        t[v] = combine(t[2 * v], t[2 * v + 1]);
////////
////////    }
////////
////////}
////////
////////int main(){
////////    for (long long i =1; i<= n; i++){
////////        a[i] = i* i% 12345 +i*i*i %23456;
////////
////////
////////    }
////////    build();
////////    cin >> k;
////////    for (int i =1; i<=k; i++){
////////        int x, y;
////////        cin >> x>> y;
////////        if (x >0) {
////////            Node c = get(x, y);
////////            cout << c.mx - c.mn << endl;
////////        } else{
////////            update (-x, y);
////////        }
////////    }
////////}
////////
////////
////////
//////// B-stock 2832 (3)
//////
//////# include <bits/stdc++.h>
//////using namespace std;
//////const int N = 1e5+5, inf = 1e9;
//////struct Node {
//////    int sum , mx;
//////
//////    Node (){
//////        sum = 0;
//////        mx = 0;
//////    }
//////
//////};
//////Node t[N *4];
//////int a[N] ,q , n;
//////
//////Node combine(Node a,Node b) {
//////    Node c;
//////    c.mx= max(a.mx, b.mx);
//////    c.sum = a.sum + b.sum;
//////    return c;
//////}
//////
//////void build (int v= 1, int tl =1, int tr =n) {
//////    if (tl == tr) {
//////        t[v].sum = a[tl];
//////        t[v].mx = a[tl];
//////    } else {
//////
//////        int tm = (tl + tr) / 2;
//////        build(2 * v, tl, tm);
//////        build(2 * v + 1, tm + 1, tr);
//////        t[v] = combine(t[2 * v], t[2 * v + 1]);
//////    }
//////}
//////Node get (int l, int r, int v =1, int tl =1, int tr =n ) {
//////    if (r < tl || tr < l)
//////        return Node();
//////    if (l <= tl && tr <= r) {
//////        return t[v];
//////    }
//////    int tm = (tl + tr) / 2;
//////
//////    return combine(get(l, r, 2 * v, tl, tm), get(l, r, 2 * v + 1, tm + 1, tr));
//////}
//////void update (int k, int v =1, int tl =1, int tr =n ) {
//////    if (tl == tr ) {
//////        t[v].mx -= k;
//////        t[v].sum -= k;
//////    }else {
//////        int tm =(tl +tr)/2;
//////        if (t[2*v].mx>=k)
//////            update(k, 2*v,tl, tm);
//////        else
//////            update(k, 2 * v + 1, tm + 1, tr);
//////        t[v] = combine(t[2 * v], t[2 * v + 1]);
//////
//////    }
//////
//////}
//////
//////int main(){
//////    cin >>n;
//////    for (int i =1; i<= n; i++){
//////        cin >>a[i];
//////
//////
//////
//////    }
//////    build();
//////    cin >> q;
//////    for (int i =1; i<=q; i++) {
//////        int x;
//////        cin >> x;
//////        if (t[1].mx< x) continue;
//////
//////        update(x);
//////    }
//////    cout <<t[1].sum<< endl;
//////}
//////
////
////
////// Problem E
//
////
////# include <bits/stdc++.h>
////using namespace std;
////const int N = 1e5+5;
////struct Node {
////    long long  sum ,must;
////
////    Node (){
////        sum = 0;
////        must = 0;
////    }
////
////};
////Node t[N *4];
////int q , n;
////
////void push (int v, int tl, int tr) {
////   t[v].sum +=(tr -tl +1) * t[v].must;
////   if (tl !=tr){
////       t[2*v].must += t[v].must;
////       t[2*v+1].must += t[v].must;
////   }
////   t[v].must=0;
////}
////Node combine(Node a,  Node b){
////    Node c;
////    c. sum = a.sum + b.sum;
////    return c;
////}
////Node get (int l, int r, int v =1, int tl =1, int tr =n ) {
////    push(v, tl, tr);
////    if (r < tl || tr < l)
////        return Node();
////    if (l <= tl && tr <= r) {
////        return t[v];
////    }
////    int tm = (tl + tr) / 2;
////    return combine(get(l, r, 2 * v, tl, tm), get(l, r, 2 * v + 1, tm + 1, tr));
////}
////void update (int l, int r, int val, int v =1, int tl=1, int tr =n){
////    push(v, tl, tr);
////    if(r<tl || tr<l)
////        return;
////    if(l <= tl && tr <=r){
////        t[v].must += val;
////        push(v, tl, tr);
////        return;
////    }
////    int tm = (tl+tr)/2;
////    update (l, r, val, 2*v, tl, tm);
////    update(l, r, val, 2*v+1, tm+1, tr);
////    t[v] = combine(t[2*v], t[2*v+1]);
////}
////int tests;
////
////
////int main() {
////    cin >> tests;
////    while (tests--) {
////        cin >> n >> q;
////        for (int i = 1; i <= q; i++) {
////            char type;
////            int x, y, w;
////            cin >> type >> x >> y;
////            if (type == '0') {
////                cin >> w;
////                update(x, y, w);
////            } else {
////                cout << get(x, y).sum << endl;
////            }
////        }
////        for (int i = 1; i <= n * 4; i++) {
////            t[i] = Node();
////
////        }
////    }
////}
////
//
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5+5;
//
//vector <int> t[N*4];
//int q, n, a[N];
//
//vector <int> combine (vector<int> &a, vector<int> &b){
//    vector <int> c;
//    merge(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));
//    return c;
//}
//void build (int v =1, int tl =1, int tr = n) {
//    if (tl == tr) {
//        t[v].push_back(a[tl]);
//    } else {
//        int tm = (tl + tr) / 2;
//        build(2 * v, tl, tm);
//        build(2 * v + 1, tm + 1, tr);
//        t[v] = combine(t[2 * v], t[2 * v + 1]);
//
//    }
//
//}
//int get (int l, int r, int x, int v =1, int tl =1, int tr =n ){
//    if ( r < tl || tr < l)
//        return 0;
//    if (l<=tl && tr<=r){
//        return lower_bound(begin(t[v]), end(t[v]), x)- begin (t[v]);
//
//    }
//    int tm = (tl +tr) / 2;
//
//    return get(l, r, x, 2*v, tl, tm) + get(l, r, x, 2*v+1, tm +1, tr);
//}
//int tests;
//
//int main() {
//    int tests = 1;
//    while (tests--) {
//        cin >> n;
//        for (int i = 1; i <= q; i++)
//            cin >> a[i];
//        build();
//        cin >> q;
//        for (int i = 1; i <= q; i++) {
//            int x, y, w;
//            cin >> x >> y >> w;
//            cout << get(x, y, w) << endl;
//        }
//    }
//}
//
