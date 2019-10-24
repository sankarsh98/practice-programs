#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string s;
	cin>>s;
	int l=s.length(),r=0;
	//sort(s.begin(),s.end());
	for(int i=0;i<l;i++){
		if(s[i]=='a') r++;
	}
	if(r>l/2){
		cout<<l;
	}else{
		if(l%2==1) cout<<l/2-r+2;
		else cout<<l/2-r+1;
	}
}
