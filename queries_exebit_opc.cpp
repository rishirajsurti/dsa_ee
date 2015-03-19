#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
#define gc getchar_unlocked
void scanint(int &x);

//add following when in windows or codeforces.com
//inline int getchar_unlocked() { return getchar(); }

void scanint(int &x){
	register int c = gc();
	x = 0;
	int neg = 0;
	for(; ((c<48 || c>57) && c!='-'); c = gc());
	if(c=='-'){ neg = 1; c = gc();}
	for(; c>47 && c<58; c=gc()){ x = (x<<1)+(x<<3)+c-48; }
	if(neg)	x=-x;

}
int main(){
	int n,q,i,j,l,r,sum=0;
	scanint(n);
	scanint(q);
	vector<int> a;
	vector<int>::const_iterator first;
	vector<int>::const_iterator last;
	//a.push_back(-9999);
	i=1;
	while(i<=n){
		scanint(j);
		a.push_back(j);
		i++;
	}
	i=1;
	while(i<=q){
		scanint(l);
		scanint(r);
		first = a.begin() + l-1;
		last = a.begin() + r;
		vector<int> newVec(first,last);
		sort(newVec.begin(),newVec.end());
		for(j=0; j<newVec.size(); j++){
			//cout<<newVec[j]<<" ";
			sum += newVec[j] * (j+1);
		}
		printf("%d\n", sum);
		sum=0;
		i++;
	}	
	return 0;
}