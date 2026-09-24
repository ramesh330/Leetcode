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

void postorder(struct TreeNode* root,int *res, int *index)
{
    if(root==NULL)
    return;

    postorder(root->left,res,index);
    postorder(root->right,res,index);
    res[(*index)++] = root->val;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int count = CountNodes(root);
    int index = 0;
    *returnSize = count;
    int *res = malloc(count * sizeof(int));

    postorder(root,res,&index);
    return res;
}