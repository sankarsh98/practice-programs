#include<iostream>
using namespace std;

int rev(){
	int a;
	cin>>a;
	if(a<100 || a>999){
		cout<<"Not possible\n";
		return 0;
	}
	int res=0,mul=100;
	while(a>0){
		res+=((a%10)*mul);
		mul/=10;
		a/=10;
	}
	return res;
}

int main(){
	int r=rev();
	if(r!=0) printf("%03d",r);
}
