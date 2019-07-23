#include <iostream>
using namespace std;

int pr(int a[],int n){
    int max=a[0],in=0;
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
            in=i;
        }
    }
    int ic=0;
    max=-99999;
    for(int i=0;i<n;i++){
        if(i!=in){
            if(max<a[i]){
                max=a[i];
                ic=i;
            }
        }
    }
    return max;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<pr(a,n);
    return 0;
}
