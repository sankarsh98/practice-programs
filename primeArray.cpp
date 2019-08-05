#include<iostream>
#include<cmath>
using namespace std;

void func(int a[],int n){

	int t;
	bool isP;
	int c=0;
	for(int i=0;i<n;i++){
		t=a[i];
		
		if(t<0){
			cout<<"No negative\n";
		}
		else{
			 isP=true;
			 
			 // check if prime
			if(t==1) isP=false;          
			for(int j=2;j<=sqrt(t);j++){
				if(t%j==0){
					isP=false;
					break;
				}
			}
			if(isP){
			cout<<t<<" ";
			c++; //count to see if no primes in the array
			}
		}
	
	}
	if(c==0) cout<<"No Primes -1"; // if no primes in the array
}

int main(){
//	int a[]={1,9,4,6,8,12};
//	func(a,sizeof(a)/sizeof(int));
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	func(a,n);
}
