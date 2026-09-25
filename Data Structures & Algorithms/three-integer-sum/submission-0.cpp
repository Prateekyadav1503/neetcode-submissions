class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>> result;
        int n = a.size();

        sort(a.begin(), a.end());

        for (int i = 0; i < n - 2; i++) {
            if (a[i] > 0) break;

            if (i > 0 && a[i] == a[i - 1]) continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = a[i] + a[left] + a[right];

                if (sum == 0) {
                    result.push_back({a[i], a[left], a[right]});

                    while (left < right && a[left] == a[left + 1]) {
                        left++;
                    }
                    while (left < right && a[right] == a[right - 1]) {
                        right--;
                    }

                    left++;
                    right--;
                } // <-- Make sure this closing brace is placed HERE before 'else if'
                else if (sum < 0) {
                    left++;
                } 
                else {
                    right--;
                }
            }
        }
        return result;
    }
};