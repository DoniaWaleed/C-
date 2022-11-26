#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int m = 0;
    cin>>n>>m;
    if(m < n)
    {
        cout<<"No";
    }
    else if(m == n)
    {
        cout<<"Yes";
    }
    return 0;
}
