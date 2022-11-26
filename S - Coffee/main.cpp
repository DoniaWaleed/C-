#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.length() == 6)
    {
        if(s[2] == s[3] && s[4] == s[5])
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    return 0;
}
