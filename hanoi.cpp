#include <bits/stdc++.h>

#define NUM_RODS 3
#define NUM_DISKS 4

typedef int rod_origin;
typedef int rod_destiny;

using namespace std;

int main()
{
    vector< stack<char> > rod(NUM_RODS, stack<char>());
    vector< pair<rod_origin, rod_destiny> > tree(pow(2, NUM_DISKS) - 1);



    cout << "Hello World!" << endl;

    return 0;
}