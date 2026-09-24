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

void preorder(struct TreeNode* root,int *res, int *index)
{
    if(root==NULL)
    return;

    res[(*index)++] = root->val;
    preorder(root->left,res,index);
    preorder(root->right,res,index);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) 
{
    int count = CountNodes(root);
    *returnSize = count;
    int index = 0;

    int *res = malloc(count*sizeof(int));
    preorder(root, res, &index);
    return res;    
}