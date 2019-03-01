/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<string>> printTree(TreeNode* root) {
        queue<TreeNode*>findlevel;
        findlevel.push_back(root);
        TreeNode* temp;
        int level=0;
        while(!findlevel.isempty){
            level++;
            temp=level.pop();
            if(temp!=NULL){
                findlevel.push_back(temp->left);
                findlevel.push_back(temp->right);
            }
        }
        for(int i=0;i<level;i++){
            for(int j=0;j<level;j++){
                
            }
        }
    }
};