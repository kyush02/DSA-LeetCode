class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        int n = rowIndex;
        long long val = 1;
        for(int k=0 ; k<=n ; k++){
            ans.push_back(val);
            val = val * (n-k)/(k+1);
        }

        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna