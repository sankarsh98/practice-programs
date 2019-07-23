#include <iostream>
using namespace std;

bool pr(int n){
    
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
         return false;
    }
    return true;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int s=0;
    for(int i=n;i<=m;i++){
        if(pr(i)) s+=i;
    }
    cout<<s;
    return 0;
}
