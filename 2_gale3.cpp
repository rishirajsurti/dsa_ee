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
	int Boys_Priority[n+1][n+1];
	int Girls_Priority[n+1][n+1];
	int Boys_Matrix[n+1][n+1];
	int Girls_Matrix[n+1][n+1];
	int Boys_Status[n+1], Girls_Status[n+1];
	
	int j,k,l, status_count;
	for(j=0;j<=n+1; j++){
		Boys_Status[j]=0;
		Girls_Status[j]=0;
	}	

	
	bool MatchFound=false;

	for(j=1; j<=n; j++){
		cin>>k;
		for(k=1; k<=n; k++){
			cin>>l;
			Girls_Priority[j][l] = k;
			Girls_Matrix[j][k] = l;
		}
	}

	for(j=1; j<=n; j++){
		cin>>k;
		for(k=1; k<=n; k++){
			cin>>l;
			Boys_Priority[j][l] = k;
			Boys_Matrix[j][k] = l;
		}
	}
	//all data collected;
//	for(j=1; j<=n; j++){
//		for(k=1; k<=n; k++){
//			cout<<"Priority for "<<j<<"th girl for "<<k<<"th boy: " <<Girls_Matrix[j][k]<<" "<<endl;;
//		}
//		cout<<endl;
//	}
	//checkpoint 1;

	int counter = 0;
	while(counter++<3)
	{	

	for(j=1; j<=n; j++){
	for(status_count=1; status_count<=n; status_count++){
		cout<<status_count<<" "<<Boys_Status[status_count]<<endl;
	}
		
		if(Boys_Status[j]==0){
		
			for(k=1; k<=n; k++){

				if(Girls_Status[Boys_Matrix[j][k]] == 0){
					Boys_Status[j] = Boys_Matrix[j][k];
					Girls_Status[Boys_Matrix[j][k]] = j;
				}

				else{
					if(Girls_Priority[Boys_Matrix[j][k]][j] <
						Girls_Priority[Boys_Matrix[j][k]][Girls_Status[Boys_Matrix[j][k]]]){
						Boys_Status[Girls_Status[Boys_Matrix[j][k]]] = 0;
						Boys_Status[j] = Boys_Matrix[j][k];
						Girls_Status[Boys_Matrix[j][k]] = j;
					}
				}
			}
		}
	}

	//check if match found or not;
	int number_of_unmatched=0;
	for(l=1; l<=n; l++){
		if(Boys_Status[l]==0)
			number_of_unmatched++;
	}

	if(number_of_unmatched==0)
		MatchFound=true;
	

	}


	}}


