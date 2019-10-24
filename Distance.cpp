#include <iostream>
 #include<math.h>
using namespace std;

float dis(int a,int b,int c,int d){
    return sqrt(pow((b-a),2)+pow((d-c),2));
}
int main()
{
    float x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    printf("%.2f",dis(x1,y1,x2,y2));
    return 0;
}
