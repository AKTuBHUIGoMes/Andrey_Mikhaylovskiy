#define _CRT_SECURE_NO_WARNINGS
#include "bintree.h"
#include <assert.h>
void treeprint(  tnode *tree) {
  if (tree!=NULL) {
    printf("%d_", tree->field);
    treeprint(tree->left);
    treeprint(tree->right);
  }
}

void treeprintInf(  tnode *tree) {
  if (tree!=NULL) {
    treeprint(tree->left);
    printf("%d_", tree->field);
    treeprint(tree->right);
  }
}

 tnode * addnode(int x,  tnode *tree) {
  if (tree == NULL) {
    tree =(tnode*)malloc(sizeof (tnode));
    tree->field = x;
    tree->left =  NULL;
    tree->right = NULL;
  }else if(x == tree->field)
  {
      printf("povtor");
      return tree;
  }else  if (x < tree->field)
    tree->left = addnode(x,tree->left);
  else
    tree->right = addnode(x,tree->right);
  return(tree);
}

void freemem(  tnode *tree) {
  if(tree!=NULL) {
    freemem(tree->left);
    freemem(tree->right);
    free(tree);
  }
}
int correctInput()
{
    int num;
    while (scanf("%d",&num) != 1)
    {
            printf("\n yodovin ");
            while(getchar() != 10);
    }
    return num;
}
static int index = 0;
void treeSeach(tnode *tree, int *arr, int sum) {
    if (tree!=NULL) {
        sum+=tree->field;
        arr[index]=sum;
    treeSeach(tree->left, arr, sum);
    treeSeach(tree->right, arr, sum);
  }
    if(sum > arr[index])
        arr[index] = sum;
}

int MAX (tnode *tree)
{
    int n = 20, sum = 0;
    int* arr = NULL;
    arr  = (int*)malloc(n * sizeof (int));
    treeSeach(tree, arr, sum);
    int max = 0;
    for(int i = 0; i < 20; ++i)
    {
        if(max < arr[i])
            max = arr[i];
    }
    //for(int i = 0; i < 1; ++i)
    //    printf(" %d ", arr[i]);
    printf("\n%d", max);
    free(arr);
    return max;
};


int test_sum() {
    int i = 5;
    tnode *root = NULL;
    while (i != 0) {
        //scanf("%d", &i);
        i = correctInput();
        if(i == 0)
            break;
       root = addnode(i, root);
        i--;
    }
    assert(MAX(root) == 15);
    return 0;
}

