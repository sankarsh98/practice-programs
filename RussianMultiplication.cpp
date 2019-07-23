#include <iostream>
using namespace std;

int pr(int a,int b){
    int p=b,mu=0;
    for(int i=1;a;i++){
        if(a%2!=0) mu+=p;
        p=p*2;
        a/=2;
    }
    return mu;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<pr(a,b);
    return 0;
}
