#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cin>>a>>b>>c;

    if(a < 10 && a > 0 && b < 10 && b > 0 && c < 10 && c > 0)
    {
        if(a==b)
        {
            if(a == c)
            {
                //Not Poor
                cout<<"No";
            }
            else if(a != c)
            {
                //Poor
                cout<<"Yes";
            }
        }
        else if(a==c)
        {
            if(a == b)
            {
                //Not Poor
                cout<<"No";
            }
            else if(a != b)
            {
                //Poor
                cout<<"Yes";
            }
        }
        else if(b==c)
        {
            if(b == a)
            {
                //Not Poor
                cout<<"No";
            }
            else if(b != a)
            {
                //Poor
                cout<<"Yes";
            }
        }
        else if(a != b && a != c && b != c)
        {
            //Not Poor
            cout<<"No";
        }
    }
    return 0;
}
