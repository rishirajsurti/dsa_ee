#include <iostream>
using namespace std;
long long int pow(int a ,int b);
long long int pow(int a ,int b){
	if(b==1)
		return a;
	else{
		if(b%2 == 0)
			return pow(a,b/2)*pow(a,b/2);
		else
			return a*pow(a,b/2)*pow(a,b/2);
	}
}
int main(){
	long long int a;
	a = pow(2,99) ;
	cout<<a<<endl;
	return 0;
}