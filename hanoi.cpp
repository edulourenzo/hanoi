#include <bits/stdc++.h>

#define NIL         -1
#define NUM_RODS    3
#define NUM_DISKS   4

using namespace std;

typedef unsigned int    uint;
typedef uint            rod_origin;
typedef uint            rod_destiny;
typedef pair<rod_origin, rod_destiny> Node;
typedef vector<Node>    Tree;

int     mod         (int, int);
void    init_tree   (Tree);
int     father      (Tree, uint);
int     left        (Tree, uint);
int     right       (Tree, uint);
void    inorder     (Tree);

int main()
{
    vector< stack<char> > rod(NUM_RODS, stack<char>());
    Tree tree(pow(2, NUM_DISKS) - 1);

    init_tree(tree);

    inorder(tree);
  
    cout << endl << "Bye Bye !!!" << endl;

    return 0;
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

int father(Tree tree, uint idx)
{
    if(idx != 0 && idx < tree.size())
        return (idx -1) / 2;
    else
        return NIL;
}

int left(Tree tree, uint idx)
{
    int answere;
    
    answere = (idx * 2) + 1;

    if(answere < tree.size())
        return answere;
    else
        return NIL;
}

int right(Tree tree, uint idx)
{
    int answere;
    
    answere = (idx * 2) + 2;

    if(answere < tree.size())
        return answere;
    else
        return NIL;
}




void inorder(Tree tree)
{
    stack<int> visited;
    int current;

    current = 0; //index of root
    while(current != NIL || !visited.empty())
    {
        //LEFT
        while(current != NIL)
        {
            visited.push(current);
            current = left(tree, current);
        }

        //ROOT
        current = visited.top();
        visited.pop();
        cout << current << endl;
        
        //RIGHT
        current = right(tree, current);
    }

}