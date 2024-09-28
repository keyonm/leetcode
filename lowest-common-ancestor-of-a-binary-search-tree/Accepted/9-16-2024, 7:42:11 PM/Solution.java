// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        TreeNode node = root;
        while (node != null) {
            if (p.val < node.val && q.val < node.val) {
                node = node.left;
            } else if ((p.val < node.val && q.val > node.val) || (p.val > node.val && q.val < node.val)) {
                return node;
            } else if (node.val == p.val) {
                return p;
            } else if (node.val == q.val) {
                return q;
            } else {
                node = node.right;
            }
        }

        return null;
    }
}