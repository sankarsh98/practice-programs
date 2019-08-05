#include<iostream>
#include<map>
#include<iterator>
using namespace std;

void dups(int a[],int n){

	map<int,int> s;
	for(int i=0;i<n;i++){
		s[a[i]]++;
	}
	map<int,int>::iterator it;
	bool isE=true;
	for(it=s.begin();it!=s.end();it++){
		if(it->second>1){
		cout<<it->first<<" "<<it->second<<endl;
		isE=false;
		}
	}
	if(!isE) cout<<"No dups";
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	dups(a,n);
}
