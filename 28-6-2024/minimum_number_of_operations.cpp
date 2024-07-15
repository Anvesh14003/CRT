#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int editDistance(const std::string& s, const std::string& t) {
    int m = s.size();
    int n = t.size();
    
    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1));

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            
            if (i == 0)
                dp[i][j] = j; 

            else if (j == 0)
                dp[i][j] = i; 

            else if (s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1];

            else
                dp[i][j] = 1 + std::min({ dp[i][j - 1],    // Insert
                                         dp[i - 1][j],    // Remove
                                         dp[i - 1][j - 1] }); // Replace
        }
    }

    return dp[m][n];
}

int main() {
    std::string s, t;
    
    std::cout << "Enter string s: ";
    std::cin >> s;
    std::cout << "Enter string t: ";
    std::cin >> t;
    
    std::cout << "The minimum number of operations required to convert \"" 
              << s << "\" to \"" << t << "\" is: " << editDistance(s, t) << std::endl;
              
    return 0;
}
