#include <iostream>
#include <algorithm>
using namespace std;

class CoinPiles {
private:
    long long a, b;

public:
    // Constructor
    CoinPiles(long long a, long long b) {
        this->a = a;
        this->b = b;
    }

    // Check if both piles can be emptied
    bool can_empty() const {
        return ((a + b) % 3 == 0) && (min(a, b) * 2 >= max(a, b));
    }

    // Static method to handle all test cases
    static void solve_all() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin >> t;
        while (t--) {
            long long a, b;
            cin >> a >> b;
            CoinPiles piles(a, b);
            cout << (piles.can_empty() ? "YES" : "NO") << "\n";
        }
    }
};

int main() {
    CoinPiles::solve_all();
    return 0;
}
