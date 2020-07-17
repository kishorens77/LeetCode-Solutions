class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)   return NULL;
        else if(root->val == p->val or  root->val==q->val)  return root;
        else{
        TreeNode *Left= lowestCommonAncestor(root->left, p,q);
        TreeNode *Right=lowestCommonAncestor(root->right,p,q);
        if(Left and Right)   return root;
        else if(!Left and !Right)    return NULL;
        else return Left?Left:Right;
        }
    }
};
