class Solution {
public:
    int fn(TreeNode* root, map<TreeNode*, long long> &mpp){
        if(!root) return 0;
        if(mpp.count(root)) return mpp[root];

        long long left = fn(root->left, mpp);
        long long right = fn(root->right, mpp);

        return mpp[root] = left + right + root->val;  // FIX
    }

    int maxProduct(TreeNode* root) {
        const int MOD = 1e9 + 7;
        map<TreeNode*, long long> mpp;

        long long sum = fn(root, mpp);

        long long best = 0;
        for(auto &it : mpp){
            if(it.first != root){
                long long x = it.second;
                best = max(best, x * (sum - x));
            }
        }

        return best % MOD;
    }
};
