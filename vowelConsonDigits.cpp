#include <iostream>
#include<stdlib.h>
using namespace std;

int whatCat(char c){
    if (c == 'a' || c == 'e' || c == 'i' || 
      c == 'o' || c == 'u' || c == 'A' || 
      c == 'E' || c == 'I' || c == 'O' || c == 'U') return 1;
      else if (isdigit(c)) return 3;
      else return 2;
}

int main()
{
    int n;
    cin>>n;
    char a[n];
    cin>>a;
    char* s = a;
    
    int v=0;
    int c=0;
    int d=0;
    
    for(int i=0;i<n;i++){
        int cat=whatCat(s[i]);
        if(cat==1) v++;
        else if(cat==2) c++;
        else if(cat==3) d++;
    }
    cout<<"Vowels:"<<v<<endl;
    cout<<"Consonants:"<<c<<endl;
    cout<<"Digits:"<<d<<endl;
    return 0;
}
