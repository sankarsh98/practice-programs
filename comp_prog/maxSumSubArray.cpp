#include<bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[]={-1,2,4,-3,5,2,-5,2};

	int best=0;

	/*O(n^3) algorithm
	REP(i,0,8){
		REP(j,i,8){
			int sum=0;
			REP(k,i,j){
				sum+=a[k];	
			}	
			best=max(best,sum);
		}
	}	
	*/

	/* O(n^2) algorithm
	REP(i,0,8){
		int sum=0;
		REP(j,i,8){
			sum+=a[j];
			best=max(sum,best);
		}
	}
	*/

	// Kadane's algorithm, O(n) time best algorithm	
	int sum=0;
	REP(i,0,8){
		sum=max(a[i],sum+a[i]);
		best=max(sum,best);
	}
	cout<<best<<endl;
}
