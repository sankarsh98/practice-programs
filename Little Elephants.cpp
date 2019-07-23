// https://www.codechef.com/problems/LECANDY

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,k,c,s=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>c;
        s+=c;
    }
    if(s>k) cout<<"No";
    else cout<<"Yes";
    cout<<endl;
    
    }
    return 0;
}
