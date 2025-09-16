# 二叉树中序遍历
## 递归
原本写法中每次创建合并vector会消耗时间最坏O(n^2)，而二叉树遍历实际上只有叶节点才写入，一个ans即可
时间复杂度为O(n)
```c++
// 辅助递归函数，直接往 ans 里添加节点值
void inorder(TreeNode* root, vector<int> &ans) {
    if (!root) return;          // 空节点直接返回
    inorder(root->left, ans);   // 遍历左子树
    ans.push_back(root->val);   // 访问根节点
    inorder(root->right, ans);  // 遍历右子树
}

// 主函数
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> ans;
    inorder(root, ans);         // 传引用，避免复制
    return ans;
}

```
## 迭代（栈回溯）
我们用栈st储存未访问的父节点，用curr检测当前节点的状态，并让curr存在时的向左到达底部  

因此，当curr==null时，就是说：**我们刚刚存储的是一个叶节点，我们可以访问他了**，因此访问并弹出栈顶  

而下一步，我们转向右子树，这是因为**我们一旦访问（记录其值）一个节点，此节点的左子树一定被访问过了**

当某个右子树完全被访问后，我们如何返回远处的父节点呢？此时curr==null,我们就不会再次进入左子树，而是直接返回远端未访问的父节点，
这里的设计十分巧妙，似乎是一举两得 在这里curr==null意味着**这是当前访问的结束，要返回远端父节点**

我们利用两次回溯：  
1.while循环内, left==null，我们刚刚存储的是一个叶节点，我们可以访问他了  
2.指向右子树时, right==null，这是当前访问的结束，要返回远端父节点

**curr==null时访问栈顶**


