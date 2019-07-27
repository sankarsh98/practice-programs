#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
   
    for(int j=0;j<n-1;j++){
    int min=a[j],in=j;
      for(int i=j;i<n;i++){
            if(min>a[i]){
                min=a[i];
                in=i;
            }
        }
        if(in!=j){
            a[j]=a[j]+a[in];
            a[in]=a[j]-a[in];
            a[j]=a[j]-a[in];
        }
    }
    for(int i=0;i<n;i++) cout<<endl<<a[i];
    return 0;
}
