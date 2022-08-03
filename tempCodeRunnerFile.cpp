#include <iostream>
#include <cmath>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    float x,y,z;
    float quo=0.0;
    int cost=0;
    cin>>x>>y>>z;
    quo=ceil(x/y);
    
    if(quo>=1)
    cost=(quo)*z;
    else
    cost=z;

    cout<<cost<<"\n";
}
	return 0;
}
