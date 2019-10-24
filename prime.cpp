#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int a){
	bool is=true;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return false;
	}
	return is;
}
int main(){
	int a;
	char y;
	do{
		cout<<"\nEnter: ";
		cin>>a;
		cout<<isprime(a)<<"\n";
		cin>>y;
	}while(y=='y');
	return 0;
}
