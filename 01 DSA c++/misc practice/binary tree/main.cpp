#include <iostream>
/*

Thought Process: Create Nodes
Let's start by creating our nodes.

A node in a binary tree will have three core information:

The data value.
The location of the left child.
The location of the right child.
And unlike general trees, where we pass all the children of a node as a vector, we must define the child being added as a left or a right child.

So, we can divide the entire process of creating nodes into the following steps.

*/

class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode* left{};
    BinaryTreeNode* right{};
    /*
    data - The data value.
left - Pointer to the left child.
right - Pointer to the right child.
    */

    BinaryTreeNode(int val)
        : data(val),
        left{nullptr},
        right{nullptr}
        {}

    /*
    add_left_child() - Attaches a left child to a node.
add_right_child() - Attaches a right child to a node.
    */
    void add_left_child(BinaryTreeNode* node)
    {
        left=node;
    }

    void add_right_child(BinaryTreeNode* node)
    {
        right=node;
    }
};

class BinaryTree
{
public:
    BinaryTreeNode* root;

    BinaryTree()
        :root{nullptr}
    {
    }
    //By creating an instance of the class, we can initialize a BinaryTree object with a selected node as the root.

    void sampleTree()
    {
        BinaryTreeNode* root = new BinaryTreeNode(5);
        BinaryTreeNode* left = new BinaryTreeNode(6);
        BinaryTreeNode* right = new BinaryTreeNode(7);
        BinaryTreeNode* new_node_left = new BinaryTreeNode(8);

        root->add_left_child(left);
        root->add_right_child(right);
        root->left->left->add_left_child(new_node_left);
    }

    void sample_one()
    {
        root = new BinaryTreeNode(1);
        root->left = new BinaryTreeNode(2);
        root->right = new BinaryTreeNode(3);
        root->left->left = new BinaryTreeNode(4);
        root->left->right = new BinaryTreeNode(5);
    }

    /*
                1
               / \
              2   3
             / \
            4   5
            for this
            inorder, 4->2->5->1->3
            preorder, 1->2->4->5->3
            postorder, 4->5->2->3->1
    */

    void inorder_traversal(BinaryTreeNode* root)
    //DFS, depth first search
    //left, root, right traversal
    //we use recursion
    {
        if(!root) return;
        //base case

        inorder_traversal(root->left);
        std::cout << root->data << " -> ";
        inorder_traversal(root->right);
    }

    void preorder_traversal(BinaryTreeNode* root)
    {
        if(!root) return;
        //basecase

        //root, left, right
        std::cout << root->data << " -> ";
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }

    void postorder_traversal(BinaryTreeNode* root)
    {
        if(!root) return;
        //basecase

        //left, right, root
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        std::cout << root->data << " -> ";
    }
};


int main()
{
    BinaryTree binary_tree;

    binary_tree.sample_one();
    binary_tree.inorder_traversal(binary_tree.root);
    std::cout << std::endl;
    binary_tree.preorder_traversal(binary_tree.root);
    std::cout << std::endl;
    binary_tree.postorder_traversal(binary_tree.root);
    std::cout << std::endl;
    /*
            inorder, 4->2->5->1->3
            preorder, 1->2->4->5->3
            postorder, 4->5->2->3->1
    */

    return 0;
}
