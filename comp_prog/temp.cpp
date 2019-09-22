#include<bits/stdc++.h>
using namespace std;
#define sq(a) a*a
#define f(i,a,b) for(int i=a;i<=b;i++)
#define pr(j) cout<<j<<"\n"
#define lin(s) getline(cin,s)
#define pb push_back
typedef long long ll;
typedef vector<string> vs;
typedef string st;

//ios::sync_with_stdio(0);
//cin.tie(0);

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vs v;
	st a;
	while(a!="exit"){
		lin(a);
		v.pb(a);
	}
	/*
	v.pb(a);
	cout<<sq(a)<<"\n";
	f(j,a,sq(a)){
		v.pb(j);
	}
	*/
	f(i,0,v.size()-1){
		pr(v[i]);
	}
}
