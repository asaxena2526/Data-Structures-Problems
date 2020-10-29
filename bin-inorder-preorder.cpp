/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int search(int start, int end, vector <int> &inorder, int val)
{
    for(int i=start; i<=end; i++)
    {
        if(inorder[i]==val)
        return i;
    }
}
TreeNode* build(int &preindex,vector<int> &pre, vector<int>&in, int startin, int endin)
{
   
    if(startin>endin)return NULL;
    //  cout<<"build?"<<endl;
    
    int val=pre[preindex];
    preindex--;
    TreeNode* x= new TreeNode(val);
    if(startin==endin) return x;
   
    int position=search(startin, endin, in, val);
    x->right=build(preindex, pre, in, position+1, endin);
    x->left=build(preindex, pre, in, startin, position-1);
    return x;
    
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B){
    
int preindex=A.size()-1;
int size=A.size();
TreeNode *ans= build(preindex, B, A, 0, size-1);
//  cout<<s;
return ans;
}
