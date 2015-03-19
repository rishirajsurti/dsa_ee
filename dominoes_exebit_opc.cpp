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
int main(){
	long long int n,i,j,sum=0;
	vector<long long int> a;
	
	scanint(n);
	j=n;
	while(n--){
		scanint(i);
		a.push_back(i);
	}
	sort(a.rbegin(),a.rend());
	
	/*n=j;
	j = j/2;
	if(n%2!=0)
		j++;

	for(i=0; i<j; i++){
		sum+=a[i];
	}
	printf("%lld\n",sum );
*/
	n=j;
	for(i=0; i<n; i= i+2){
		sum = sum+a[i];
	}
	printf("%lld\n",sum );
	
}