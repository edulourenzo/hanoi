#include <bits/stdc++.h>

#define NUM_RODS 3
#define NUM_DISKS 4

using namespace std;

typedef unsigned int uint;
typedef uint rod_origin;
typedef uint rod_destiny;
typedef pair<rod_origin, rod_destiny> Node;
typedef vector<Node> Tree;

int father  (Tree, uint);
int left    (Tree, uint);
int right   (Tree, uint);

int main()
{
    vector< stack<char> > rod(NUM_RODS, stack<char>());
    Tree tree(pow(2, NUM_DISKS) - 1);

    for(uint i = 0; i < tree.size(); i++)
    {
        cout << "Pai de " << i << ": " << father(tree, i) << endl;
        cout << "Dir de " << i << ": " << right(tree, i) << endl;
        cout << "Esq de " << i << ": " << left(tree, i) << endl;
        cout << endl;
    }
  
    cout << "Bye Bye !!!" << endl;

    return 0;
}

int father(Tree t, uint idx)
{
    if(idx != 0)
        return (idx -1) / 2;
    else
        return -1;
}

int left(Tree t, uint idx)
{
    int answere;
    
    answere = (idx * 2) + 1;

    if(answere < t.size())
        return answere;
    else
        return -1;
}

int right(Tree t, uint idx)
{
    int answere;
    
    answere = (idx * 2) + 2;

    if(answere < t.size())
        return answere;
    else
        return -1;
}
