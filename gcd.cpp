#include<iostream>
using namespace std;

int gcd(int a,int b){
	if(a<0 || b<0){
		cout<<"No negatives\n";
		return -1;
	}
	int r,t;
	int c=(a>b)?a:b;
	int d=(a<b)?a:b;
	t=c;
	do{
		r=t%d;
		t=d;
		d=r;			
	}while(r);
	return t;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
}
