/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int CountNodes(struct TreeNode *root)
{
    if(root==NULL)
    return 0;
    
    return 1 + CountNodes(root->left) + CountNodes(root->right);
}

void inorder(struct TreeNode* root,int *res, int *index)
{
    if(root==NULL)
    return;

    inorder(root->left,res,index);
    res[(*index)++] = root->val;
    inorder(root->right,res,index);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) 
{
    int count = CountNodes(root);
    int index = 0;
    *returnSize = count;
    
    int *res = malloc(count*sizeof(int));
    inorder(root,res,&index);

    return res;
}