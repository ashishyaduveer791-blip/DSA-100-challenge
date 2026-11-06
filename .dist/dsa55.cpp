#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// tree node defination
struct TreeNode
{
   int val;
   TreeNode *left;
   TreeNode *right;

   TreeNode(int x)
   {
      val = x;
      left = NULL;
      right = NULL;
   }
};

class Solution
{
private:
   unordred_map<int, int> inorderMap;
   int preeIndex = 0;
   TreeNode *build(vector<int> &preoder,
                   int left,
                   int right)
   {
      if (left > right)
         return NULL;

      // root node from preoder
      int rootval = preoder[preIndex++];
      TreeNode *root = new TreeNode(rootval);

      // find root position in order
      int mid = inodermap[rootval];

      // build  left subtree
      root->left = build(preorder, left, mid - 1);

      // build right  subtree}

      root->right = build(preorder, mid + 1, right);

      return root;
   }

public:
   TreeNode *buildTree(vector<int> &preoder, vector<int> &inorder)
   {
      for (int i = 0; i < inoder.size(); i++)
      {
         inoderMap[inoder[i]] = i;
      }

      return build(pre)
   }