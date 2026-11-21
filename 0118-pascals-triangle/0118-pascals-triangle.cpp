class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int a = numRows - 1;
        vector<vector<int>> matrix(numRows);
        for(int i=0 ; i<=a ; i++){
            long long val = 1;
            for(int k=0 ; k<=i ; k++){
                matrix[i].push_back(val);
                val = val * (i-k)/(k+1);
            }
        }

        return matrix;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna