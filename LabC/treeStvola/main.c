#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <bintree.h>
#include <bintree.cpp>
#include <ctype.h>
#include <stdlib.h>

int getMaxDepth(tnode* tree, int depth) {
    if (tree == NULL) {
        return depth;
    }
        return max(getMaxDepth(tree->left, depth + 1), getMaxDepth(tree->right, depth + 1));
}

int main()
{
    printf("Hello World!\n");
    int i = 1;
    tnode *root = NULL;
    while (i != 0)
    {
        i = correctInput();
        if(i == 0)
            break;
       root = addnode(i, root);
    }
    treeprint(root);
    MAX(root);
    printf("\n%d", getMaxDepth(root,0));
    freemem(root);
    test_sum();
    return 0;
}
