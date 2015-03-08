#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector< vector<int> > boys,girls;
vector<int> row;
vector<int> b_status, g_status;
void getData(int N);
void Print();
int main(){
	int t;
	cin>>t;
	int i,n;
	for(i=0; i<t; i++){
		cin>>n;
		getData(n);
		Print();
		
		}
}

void getData(int N){
	int i,j,k;
	for(i=1; i<=N; i++){
		cin>>j;
		for(j=1; j<=N; j++){
			cin>>k;
			row.push_back(k);
		}
		girls.push_back(row);
		row.clear();
		g_status.push_back(0); //all are unmatched
	}

	for(i=1; i<=N; i++){
		cin>>j;
		for(j=1; j<=N; j++){
			cin>>k;
			row.push_back(k);
		}
		boys.push_back(row);
		row.clear();
		b_status.push_back(0);// all are unmatched
	}
}

void Print(){
	int i,j;
	for(i=0; i<boys.size(); i++){
		for(j=0; j<boys[i].size(); j++){
			cout<< boys[i][j]<< " ";
		}
		cout<<endl;
	}
	for(i=0; i<boys.size(); i++){
		for(j=0; j<boys[i].size(); j++){
			cout<< girls[i][j]<< " ";
		}
		cout<<endl;
	}
}