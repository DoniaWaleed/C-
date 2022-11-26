#include <iostream>

using namespace std;

int main()
{
    int s = 0;
    int w = 0;
    cin>>s>>w;

    if(s > 0 && s < 101 && w > 0 && w < 101)
    {
        if(w >= s)
        {
            cout<<"unsafe";
        }
        else
        {
            cout<<"safe";
        }
    }
    return 0;
}
