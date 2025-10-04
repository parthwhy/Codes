#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> arr(n);
        std::vector<int> zero_prefix_sum(n, 0);
        std::vector<int> adjacent_pair_indices;
        
        int zero_count = 0;
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
            if (arr[i] == 0) {
                zero_count++;
            }
            zero_prefix_sum[i] = zero_count;

            if (i > 0 && arr[i] == arr[i - 1]) {
                // Store the index of the FIRST element of the pair
                adjacent_pair_indices.push_back(i - 1);
            }
        }

        for (int i = 0; i < k; i++) {
            int s, e;
            std::cin >> s >> e;
            // Convert to 0-based index
            s--; 
            e--;

            // Calculate number of 0s and 1s in the range [s, e]
            int zeros_in_range = zero_prefix_sum[e] - (s > 0 ? zero_prefix_sum[s - 1] : 0);
            int ones_in_range = (e - s + 1) - zeros_in_range;

            if (zeros_in_range % 3 != 0 || ones_in_range % 3 != 0) {
                std::cout << -1 << "\n";
                continue;
            }

            int ops = zeros_in_range / 3 + ones_in_range / 3;
            
            // Find the first adjacent pair at or after the start 's'
            auto it = std::lower_bound(adjacent_pair_indices.begin(), adjacent_pair_indices.end(), s);

            bool pair_found_in_range = false;
            // Check if we found a pair AND that pair's index is inside our query range.
            // A pair at index `j` involves elements `j` and `j+1`. For this to be inside [s,e], we need j+1 <= e, or j <= e-1.
            if (it != adjacent_pair_indices.end() && *it <= e - 1) {
                pair_found_in_range = true;
            }

            if (pair_found_in_range) {
                std::cout << ops << "\n";
            } else {
                std::cout << ops + 1 << "\n";
            }
        }
    }
    return 0;
}