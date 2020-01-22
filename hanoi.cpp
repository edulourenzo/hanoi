#include <bits/stdc++.h>

#define NIL -1
#define ROOT 0
#define NUM_PEGS 3
#define NUM_DISKS 26 

uint64_t cont = 0;

using namespace std;

typedef unsigned int uint;
typedef uint peg_origin;
typedef uint peg_destiny;
typedef pair<peg_origin, peg_destiny> Node;
typedef vector<Node> Tree;
typedef char disk;
typedef stack<disk> Peg;
typedef vector<Peg> Table;

int mod(int, int);
void init_tree(Tree &);
int father(Tree &, uint);
int left(Tree &, uint);
int right(Tree &, uint);
void inorder(Tree &, Table &);
void move_disk(Table &, Node);

int main()
{
    Table pegs(NUM_PEGS, stack<char>());
    Tree tree(pow(2, NUM_DISKS) - 1);
    uint it;

    init_tree(tree);

    for (it = 1; it <= NUM_DISKS; it++)
    {
        pegs[0].push('A' + NUM_DISKS - it);
    }

    inorder(tree, pegs);

    cout << cont << " Movimentos!" << endl;

    return 0;
}

int mod(int a, int b)
{
    return (b + (a % b)) % b;
}

void init_tree(Tree &tree)
{
    Node aux;
    int idx, wise;
    uint head, tail;
    uint i, j;
    bool first;

    idx = 0;
    wise = 1;
    for (i = 0; i < NUM_DISKS; i++)
    {
        head = pow(2, i) - 1;
        tail = pow(2, i + 1) - 1;

        wise *= -1;
        first = true;
        for (j = head; j < tail; j++)
        {
            if (!first)
                aux.first = tree[idx - 1].second;
            else
            {
                aux.first = 0;
                first = false;
            }

            aux.second = mod(aux.first + wise, NUM_PEGS);

            tree[idx] = aux;

            idx++;
        }
    }
}

int father(Tree &tree, uint idx)
{
    if (idx != ROOT && idx < tree.size())
        return (idx - 1) / 2;
    else
        return NIL;
}

int left(Tree &tree, uint idx)
{
    int answere;

    answere = (idx * 2) + 1;

    if (answere < tree.size())
        return answere;
    else
        return NIL;
}

int right(Tree &tree, uint idx)
{
    int answere;

    answere = (idx * 2) + 2;

    if (answere < tree.size())
        return answere;
    else
        return NIL;
}

void inorder(Tree &tree, Table &pegs)
{
    stack<int> visited;
    Node node;
    int current;

    current = ROOT;
    while (current != NIL || !visited.empty())
    {
        //LEFT
        while (current != NIL)
        {
            visited.push(current);
            current = left(tree, current);
        }

        //ROOT
        current = visited.top();
        visited.pop();

        move_disk(pegs, tree[current]);

        //RIGHT
        current = right(tree, current);
    }
}

void move_disk(Table &pegs, Node node)
{
    uint origin, destiny;
    disk target;

    origin = node.first;
    destiny = node.second;

    target = pegs[origin].top();
    pegs[origin].pop();

    pegs[destiny].push(target);

    cont++;
}
