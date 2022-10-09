#include<iostream>
#include<vector>
using namespace std;


/*
Given a reference of a node in a connected undirected graph. 
return a deep copy(clone) of the graph. 

Each node in the graph contains a value(int) and a list 
(List[Node]) of its neighbors. 


class Node{
    public int val;
    public List<Node> neighbors;

}

Test case format: 
For simplicity, each node's value is the same as the node's index (1-indexed)
for example, the first node with val == l, the second node with val == 2, and so on. 
The graph is represented in teh test case using an adjacency list. 

DEEP COPY: An meaning the gields are dereferenced: rather than references to object being copied, noew copy objects are created for any referenced objects, adn references to thsese placed in B. 
The result is different from teh result a shallow copy gives in that the objects referenced by teh copy B are distinct from those referenced by A, and independent.

Deep copy is a process in which teh copying prcess occurs recursively. It means first constructing a new collection object and then recursively populatin git with copies of the child objects found
in the original. In case of deep copy, a copy of object is copied in other object. 


For simplicity, each node's vau is the same as the node's index(1-indexed). For example, the first node 
with val == 1, teh second node with val == 2, adn so on. 
The graph is represented in teh test case using an adjacency list. 

The adjacency list is collection of unordered lists used to represent a finite graph. EAch list describes the set of neighbors of a node 
Each list describes the set of neighbors of a node in teh graph. 

The given node will always be the first node with val = 1.
You must return the copy of fiven node as a reference to the cloned graph. 


*/




class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

/*                          
                        create copies of nodes, 
                        it is going to be recursive. 
                        1 --> 2.


                    go to first neighbor which is 2 and clone 2 , 
                    add it to the hash map
                    try to clone 1 but we alreay have 1 in hash, and 
                    nighbor 1 
                    clone 4 
                    and add to hash, 
                    now clone its neighbors. 
                    look check if the neighbor is already in hash map, 
                    if there is none then clone, 


Hash map method, 
old     | new 
1       |   1
 2       |2
   4     | 4
    3    | 3
        |

O(N)  where N = edges + vertices

using depth first search, 
recursive depthfirst search





*/
Node* cloneGraph(Node* node){

}