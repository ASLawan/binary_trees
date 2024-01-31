# 0x1D. C - Binary trees
This project involves learning and applying concepts of binary trees as a data structure. This is done in **C programming**  
Binary trees are a fundamental data structure . They're essentially tree-like structures where each node can have at most two children:   
    - a left child and   
    - a right child.   
This organization offers a unique way to store and access data efficiently.

## Key features of binary trees:

### Structure:
    - Each node contains a data element (e.g., a number, a string, an object).  
    - Nodes can be connected to two child nodes.  
    - The topmost node is called the root node.  
    - Nodes without children are called leaf nodes.  
### Order:
Binary trees typically maintain some order among their nodes. Common orderings include:  
    - **Binary search trees (BSTs):**   
Nodes are ordered so that the value in a left child is always less than or equal to the value in its parent, and the value in a right child is always greater than or equal to the value in its parent.  
    - **Heap binary trees:**   
Values in parent nodes are always greater than or equal to their children (max heaps) or less than or equal to their children (min heaps).
### Operations:
You can perform various operations on binary trees, such as:  
    - **Searching:**   
Find a specific element within the tree.  
    - **Insertion:**   
Add a new element to the tree while maintaining the ordering.  
    - **Deletion:**   
Remove an element from the tree while preserving its structure.  
    - **Traversal:**   
Visit each node in the tree in a specific order  
    - Pre-order  
    - In-order  
    - Post-order  

## Project Tasks

### Task 0: New node
In this task, we implemented a function that creates a new node in the binary.

### Task 1: Insert left
Here we implemented a function that inserts a new node to the left of another node.

### Task 2: Insert right
Like the previous task but we are inserted the new node to the right of another node in a binary tree.

### Task 3: Delete
In this task, we implement a function that deletes an entire binary tree.

### Task 4: Is leaf
In this task, we implemented a function to check if a given node is a leaf node.  
**leaf node** - node with 0 child nodes

### Task 5: Is root
Implemented a function that checks if given node is a root node for the binary tree.

### Task 6: Pre_order traversal
Implements a function that traverses a binary tree using pre_order algorithm.

### Task 7: Inorder traversal
Implements a function that traverses a binary tree using inorder algorithm.

### Task 8: Postorder traversal
Implements a function that traverses a binary tree using postorder algorithm.

### Task 9: Height
Implements a function that computes the height if a given binary tree.

### Task 10: Depth
Implements a function that computes the depth of a given node in a binary tree.

### Task 11: Size
Implements a function that computes the size of a given binary tree.

### Task 12: Leaves
Implements a function that counts the number of leaf nodes in a binary tree.

### Task 13: Nodes
Implements a function that counts the number of nodes that have at least one child node.

### Task 14: Balance factor
Implements a function that computes the balance factor of a binary tree.  
Balance factor of a node refers to the difference between the heights of its left and right subtrees.  
It's used to quantify how "balanced" the tree is around that node.
    **-Positive balance factor (BF > 0):**  
The left subtree is taller than the right subtree. This indicates a left-heavy node.  
    **-Negative balance factor (BF < 0):**  
The right subtree is taller than the left subtree. This indicates a right-heavy node.
    **-Zero balance factor (BF = 0):**  
The left and right subtrees have the same height. This indicates a perfectly balanced node.  
Balance factors are particularly important for self-balancing binary trees, like AVL trees or red-black trees.  
These trees use the balance factors of their nodes to perform rotations and maintain a roughly balanced structure even after insertions or deletions  

### Task 15: Is full
Implements a function that checks if a binary tree is full or not.  
    **-Full Binary tree:**  
A binary tree in which all nodes either have two child nodes or none.  


### Task 17: Sibling
Implements a function that checks if two nodes on a binary tree are siblings.  


### Task 18: Uncle
Implements a function that finds the uncle to a given node in a binary tree.