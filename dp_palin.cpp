#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
int min(int a , int b){
	return (a<b ? a : b);
}
int main(){
	int n,i;
	string s;
	cin>>n;
	cin>>s;
//	cout<<MakePalin(s,n)<<endl;

	size_t size =n;

	int **dp = new int*[size];
	for(i=0; i<size; i++)
		dp[i] = new int[size];

	//	long long int dp[n][n];
	int start,end,dist;
	//memset(dp,0, sizeof(dp));
	
	for(dist=1; dist< n; dist++){
		for(start=0, end = dist;  end<n; start++,end++){

			if(s[start]==s[end])
				dp[start][end] = dp[start+1][end-1];
			else
				dp[start][end] = 1 + min(dp[start+1][end] , dp[start][end-1]);
		}
	}
	cout<<dp[0][n-1]<<endl;
	delete[] dp;
	return 0;
}	
