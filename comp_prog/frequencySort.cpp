#include<bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
#define mp make_pair
#define pb push_back

typedef vector<pair<int,int>> vii;
typedef map<int,int> mii;
typedef vector<int> vi;
typedef pair<int,int> pii;

bool comp(pii a,pii b){
	if(a.second==b.second) return a<b;
	return a.second>b.second;
}

int main(){
	int n;
	cin>>n;
	int a;
	mii m;
	REP(i,0,n){
		cin>>a;
		m[a]++;
	}

	mii::iterator it;
	
	vii v;
	for(it=m.begin();it!=m.end();it++){
		v.pb(mp(it->first,it->second));	
	}	
		
	sort(v.begin(),v.end(),comp);

	REP(i,0,v.size()){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
}
