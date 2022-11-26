#include <iostream>

using namespace std;

int main()
{
    int no_contests = 0;
    int displayed_rating = 0;
    int inner_rating = 0;
    cin>>no_contests>>displayed_rating;
    if(no_contests >= 10)
    {
        inner_rating = displayed_rating;
    }
    else if(no_contests < 10)
    {
        inner_rating = displayed_rating + (100*(10-no_contests));
    }
    cout<<inner_rating;
    return 0;
}
