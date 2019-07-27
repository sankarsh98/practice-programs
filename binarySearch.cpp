#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int k;
    cin>>k;
    
    int low=0,high=n-1;
    int mid=(low+high)/2;
    
    while( low<=high){
        if(k<a[mid]){
            high=mid-1;
        }else if(k>a[mid]){
            low=mid+1;
        }else{
            cout<<k<<" Found at "<<mid+1<<endl;
            break;
        }
        mid=(low+high)/2;
    }
    if(low>high) cout<<"Not found";
    return 0;
}
