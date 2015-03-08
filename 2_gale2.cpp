#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	int i,n;
	i=0;
	while(i++<t){
	cin>>n;
	int b[n+1][n+1];
	int g[n+1][n+1];
	int j,k,l;

	for(j=1; j<=n; j++){
		cin>>k;
		for(k=1; k<=n; k++){
			cin>>l;
			g[j][l] = k;
		}
	}

	for(j=1; j<=n; j++){
		cin>>k;
		for(k=1; k<=n; k++){
			cin>>l;
			b[j][l] = k;
		}
	}
	//all data collected;
	for(j=1; j<=n; j++){
		for(k=1; k<=n; k++){
			cout<<"Priority for "<<j<<"th girl for "<<k<<"th boy: " <<g[j][k]<<" "<<endl;;
		}
		cout<<endl;
	}
	//checkpoint 1;

	int b_match[n+1],g_match[n+1];
	
	}}


