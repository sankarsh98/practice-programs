#include <iostream>
#include <map>
#include <iterator>
using namespace std;
bool sea(map<int,int> m,int c)
{
    //cout<< c <<endl;
    map<int,int>::iterator mi; 
    mi=m.begin(); 
    for(;mi!=m.end();mi++){ 
        if(mi->second==c) return true; 
    } 
    return false; 
}
    

int main()
{
    int a,b,c;
    cin >> a >> b;
    map<int,int> m;
    int i=1,j=1;
    while(1){
     j=j*a; 
     c= j%10; 
     if(sea(m,c)) break;
     m[i++]=c; 
     //cout<< c<<endl;
    }
    int n=m.size(); //cout<<n;
    int r=b%n;
    if(r==0) cout<<m[n];
    else cout<<m[r];
}
