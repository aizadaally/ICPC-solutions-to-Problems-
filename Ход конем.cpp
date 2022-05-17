#include <bits/stdc++.h>
#define ll long long
using namespace std;
int dp[52][52];

main(){
	int n,m;
	cin >> n >>m;
	
	dp[1][1]=1;
	
	for(int i = 2; i <=n; i++)
		for(int j = 2; j <= m ; j++)
			dp[i][j]= dp[i-1][j-2] + dp[i-2][j-1];
	
	cout << dp[n][m]<< endl;
}