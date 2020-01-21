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

    init_tree(tree);
  
    cout << endl << "Bye Bye !!!" << endl;

    return 0;
}

int father(Tree tree, uint idx)
{
    if(idx != 0 && idx < tree.size())
        return (idx -1) / 2;
    else
        return -1;
}

int left(Tree tree, uint idx)
{
    int answere;
    
    answere = (idx * 2) + 1;

    if(answere < tree.size())
        return answere;
    else
        return -1;
}

int right(Tree tree, uint idx)
{
    int answere;
    
    answere = (idx * 2) + 2;

    if(answere < tree.size())
        return answere;
    else
        return -1;
}


int mod(int a, int b)
{
   return (b + (a % b)) % b;
}

void init_tree(Tree tree)
{
    Node aux;
    int idx, wise;
    uint head, tail;
    uint i, j;
    bool first;

    idx = 0;
    wise = 1;
    for(i = 0; i < NUM_DISKS; i++)
    {
        head = pow(2, i) - 1;
        tail = pow(2, i + 1) - 1;

        wise *= -1;
        first = true;
        for(j = head; j < tail; j++)
        {
            if(!first)
                aux.first = tree[idx - 1].second;
            else
            {
                aux.first = 0;
                first = false;
            }
            
            aux.second = mod(aux.first + wise, NUM_RODS);

            tree[idx] = aux;
            
            idx++;
        }
    }
}