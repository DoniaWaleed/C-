#include <iostream>

using namespace std;

int main()
{
    char input_char;
    cin>>input_char;
    if(input_char >= 'a' && input_char < 'z')
    {
        cout<<static_cast<char>(input_char+1);
    }
    return 0;
}
