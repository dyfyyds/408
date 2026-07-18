#ifndef TREE_H
#define TREE_H

#include "TreeNode.h"

template <typename T>
class Tree {
private:
    auto insertRec(TreeNode<T>* node, T value) -> TreeNode<T>* {
        if (node == nullptr) {
            return new TreeNode<T>(value);
        }

        if (value < node->data) {
            node->left = insertRec(node->left, value);
        } else {
            node->right = insertRec(node->right, value);
        }

        return node;
    }
    
public:
    TreeNode<T>* root;

    Tree() : root(nullptr) {}

    auto insert(T value) -> void {
        root = insertRec(root, value);
    }
};


#endif