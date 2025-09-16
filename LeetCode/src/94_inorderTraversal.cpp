#include <vector>
#include <stack>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
     TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution1 {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        //l--m--r
        vector<int> l,r,ans;
        if(!root)return l;
        if(root->left) {
            l=inorderTraversal(root->left);
        }
        ans.insert(ans.end(),l.begin(),l.end());
        ans.push_back(root->val);
        if(root->right) {
            r=inorderTraversal(root->right);
        }
        ans.insert(ans.end(),r.begin(),r.end());
        return ans;
    }
};

class Solution2 {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        //l--m--r
        vector<int> ans;
        stack<TreeNode*> st;//存储未访问的父节点
        TreeNode* curr = root;
        while (curr || !st.empty()) {
            // 遍历到最左侧节点
            while (curr) {
                st.push(curr);
                curr = curr->left;
            }
            // 访问节点
            //curr==null回溯，让curr指向父节点
            curr = st.top();
            st.pop();
            ans.push_back(curr->val);//访问并弹出
            // 转向右子树
            curr = curr->right;
        }
        return ans;
    }
};