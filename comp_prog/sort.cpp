
//It is best to use library sort function instead of writing one
#include<bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
#define pr(a) cout<<a<<"\n"
#define pb push_back
#define mp make_pair

typedef vector<int> vi;
typedef pair<int,int> pii;

bool comp(string a,string b){
	if(a.length()==b.length()) return a<b;
	return a.length()<b.length();
}

int main(){

	int a[]={5,3,6,-3,6,-9,0,10};
	int n=sizeof(a)/sizeof(int);
	//sorting an array
	sort(a,a+n);

	//vi v={9,7,5,3,1,2,8,6,4};
	
	vector<pair<int,int>> v;
	v.pb(mp(5,3));
	v.pb(mp(1,4));
	v.pb(mp(1,3));
	n=v.size();
	//sorting a vector
	sort(v.begin(),v.end());
	//reverse sorting a vector
	sort(v.rbegin(),v.rend());

	//string vector
	vector<string> vs={"apple","mango","banana","grapes","papaya","gauva","lemon","orange","strawberry"};
	n=vs.size();
	//sorting according to length first then order using comp function
	sort(vs.begin(),vs.end(),comp);
	
	REP(i,0,n){
		//cout<<v[i].first<<" "<<v[i].second<<"\n";
		pr(vs[i]);
	}
}
