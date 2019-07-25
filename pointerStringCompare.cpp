#include <iostream>
using namespace std;

int main()
{
    
    char a[20],b[30];
    cin>>a>>b;
    char* s = a;
    char* ss =b;
    
    for(int i=0;;i++){
        if((s[i])!=(ss[i])){
            cout<<"NO";
            return 0;
        }
        if(s[i]==ss[i] && s[i]=='\0'){
            break;
        }
    }
    cout<<"YES";
    return 0;
}

