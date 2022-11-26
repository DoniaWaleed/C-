#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.length() == 3)
    {
        if((s[0] == 'A' || s[0] =='B') && (s[1] == 'A' || s[1] =='B') && (s[2] == 'A' || s[2] =='B'))
        {
            if(s[0] == s[1] && s[0] == s[2] && s[1] == s[2])
            {
                cout<<"No";
            }
            else if((s[0] == s[1]) && (s[0] != s[2]) || (s[0] == s[2]) && (s[0] != s[1]) || (s[1] == s[2]) && (s[0] != s[1]))
            {
                cout<<"yes";
            }
        }
    }
    return 0;
}
