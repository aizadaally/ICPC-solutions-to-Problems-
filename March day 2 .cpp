//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 5;
//
//int n, d, c, h[N];
//
//int calc(int x) {
//    int cnt = 0;
//    for (int i = 1; i <= n - c + 1; i++) {
//        if (h[i + c - 1] - h[i] <= x) {
//            cnt++;
//            i = i + c - 1;
//        }
//    }
//    return cnt;
//}
//
//int main() {
//    cin >> n >> d >> c;
//    for (int i = 1; i <= n; i++) {
//        cin >> h[i];
//    }
//    sort(h + 1, h + n + 1);
//
//    int l = -1, r = 1e9;
//    while (r - l > 1) {
//        int mid = (l + r) / 2;
//        if (calc(mid) >= d) {
//            r = mid;
//        } else {
//            l = mid;
//        }
//    }
//    cout << r << endl;
//}


//bool check(int x) {
//    int cows = 1;
//    int last_cow = coords[0];
//    for (int c : coords) {
//        if (c - last_cow >= x) {
//            cows++;
//            loast_cow = c;
//        }
//    }
//    return cows >= k;
//}
//
//int solve() {
//    sort(coords.begin(), coords.end());
//    int left = 0;
//    int right = coords.back() - coords[0] + 1;
//    while (right - left > 1) {
//        int mid = (left + right) / 2;
//        if (check(mid)) {
//            left = mid;
//        } else {
//            right = mid;
//        }
//    }
//    return left;
//}


 // Problem 1 ( Коровы в стойлах)
//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5+5;
//int n, k;
//int a[N];
//
//int get(int x) {
//    int ret = 1, last = a[1];
//    for (int i = 2; i <= n; i++) {
//        if (a[i]- last >=x){
//            ret = ret +1;
//            last = a[i];
//        }
//    }
//    return ret;
//}
//int main() {
//    cin >> n >> k;
//
//    for (int i = 1; i <=n; i++){
//        cin >> a [i];
//    }
//
//    int l =1, r= a[n];
//
//    while(l<=r) {
//        int md = (l+r)/2;
//        if (get(md)>=k)
//            l=md +1;
//        else
//            r=md -1;
//    }
//    cout << r << endl;
//
//}




// Problem D (Number of Inversions)
//
//#include <bits/stdc++.h>

//using namespace std;
//
//const int  N = 1e5+5;
//const int M = 1e5+5;
//int a , b [N] [M];
//for i in range (0, a, i++);
//for j in range (0, b, j++);

