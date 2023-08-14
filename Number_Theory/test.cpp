#include <iostream>
#include <cmath>
#include <set>
#include <vector>
using namespace std;
#define ll long long int

int main() {
    ll a[] = {7, 7, 6, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2};
    ll size = sizeof(a) / sizeof(a[0]);
    ll n = pow(2, size) - 1;

    set<vector<ll>> unique_subsets; // To store unique subsets

    for (ll i = 1; i <= n; i++) {
        ll sum = 0;
        vector<ll> subset;
        for (ll j = 0; j < size; j++) {
            if (i & (1LL << j)) {
                sum += a[j];
                subset.push_back(a[j]);
                if (sum > 12) break;
            }
        }
        if (sum == 12) {
            unique_subsets.insert(subset);
        }
    }

    for (const auto& subset : unique_subsets) {
        for (const auto& element : subset) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
