#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    set<char> ch;
    for(int i=0;i<s.length();i++){
        ch.insert(s[i]);
    }
    
    //map<char,int> fr;
    for(int i=0;i<ch.size();i++){
        int c=0;
        for(int j=0;j<s.length();j++){
            if(ch[i]==s[j]) s++; 
        }
        cout<< ch[i]<<" "<<c<<endl;
    }
    //for(int i=0;i<fr.size();i++){
     //   cout<<
    //}
    return 0;
}
