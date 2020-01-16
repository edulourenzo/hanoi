#include <bits/stdc++.h>

#define NUM_RODS 3
#define NUM_DISKS 4

using namespace std;

typedef unsigned int    uint;
typedef uint            rod_origin;
typedef uint            rod_destiny;
typedef pair<rod_origin, rod_destiny> Node;
typedef vector<Node>    Tree;

int     mod         (int, int);
int     father      (Tree, uint);
int     left        (Tree, uint);
int     right       (Tree, uint);
void    init_tree   (Tree);

int main()
{
    vector< stack<char> > rod(NUM_RODS, stack<char>());
    Tree tree(pow(2, NUM_DISKS) - 1);

    //init_tree(tree);
  
    for(int i = -7; i <= 7; i++)
    {
        cout << i << " mod 3 = " << mod(i, 3) << endl;
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


int mod(int a, int b)
{
   return (b + (a % b)) % b;
}

void init_tree(Tree)
{
    uint head, tail;
    int wise;
    uint i, j;

    for(i = 0; i < NUM_DISKS; i++)
    {
        head = pow(2, i) - 1;
        tail = pow(2, i + 1) - 1;

        //alternar em horário e anti-horáro

        for(j = head; j < tail; j++)
        {
            //inserir o par ordenado
            cout << j << " ";
        }
        cout << endl;
    }
}