#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked
void scanint(long long int &x);

//add following when in windows or codeforces.com
//inline int getchar_unlocked() { return getchar(); }

void scanint(long long int &x){
	register long long int c = gc();
	x = 0;
	int neg = 0;
	for(; ((c<48 || c>57) && c!='-'); c = gc());
	if(c=='-'){ neg = 1; c = gc();}
	for(; c>47 && c<58; c=gc()){ x = (x<<1)+(x<<3)+c-48; }
	if(neg)	x=-x;

}

long long int mod(long long int i, long long int j){
	return (i>j ? (i-j):(j-i));
}

long long int min(long long int a, long long int b){

	return (a>b ? b : a);
}
int main(){
	long long int n,i,j,sum=0, ans;
	vector<long long int> a;
	a.push_back(-9999);
	scanint(n);
	j=1;
	while(j<=n){
		scanint(i);
		a.push_back(i);
		for(int k=1; k<j; k++){
			sum+= ( 2*(j-k) * min(a[j],a[k]));
		}
		j++;
	}

	printf("%lld\n",( sum%1000000007)) ;
}

