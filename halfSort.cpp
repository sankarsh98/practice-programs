#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    // sort(a,a+n/2);
    // sort(a+n/2,a+n,greater<int>());
    
    for(int i=0;i<ceil(n/2)-1;i++){
        int max=a[i],in=i;
        for(int j=i+1;j<ceil(n/2);j++){
            if(max<a[j]){ 
                max=a[j];
                in=j;
            }
            int x=a[i];
            a[i]=a[in];
            a[in]=x;
        }
    }
    
    for(int i=floor(n/2)+1;i<n-1;i++){
        int max=a[i],in=i;
        for(int j=i+1;j<n;j++){
            if(max>a[j]){ 
                max=a[j];
                in=j;
            }
            int x=a[i];
            a[i]=a[in];
            a[in]=x;
        }
    }
    
    for(int i=0;i<n;i++)
    cout<<a[i];
}
