#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int c;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    
    for(int i=0;i<n;i++) cout<<endl<<a[i];
    return 0;
}
