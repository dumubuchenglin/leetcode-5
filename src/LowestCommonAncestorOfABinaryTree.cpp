#include "LowestCommonAncestorOfABinaryTree.hpp"

TreeNode* LowestCommonAncestorOfABinaryTree::lowestCommonAncestor(
  TreeNode* root, TreeNode* p, TreeNode* q)
{
  if (root == nullptr) {
    return nullptr;
  }

  if (root == p || root == q) {
    return root;
  }

  TreeNode* l = lowestCommonAncestor(root->left, p, q);
  TreeNode* r = lowestCommonAncestor(root->right, p, q);

  if (l && r) {
    return root;
  }

  return l ? l : r;
}