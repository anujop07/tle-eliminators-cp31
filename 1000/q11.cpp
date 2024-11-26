#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long d;
    cin >> n >> d;

    vector<long long> arr(n); // Powers of players
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int wins = 0;
    int i = -1, j = n - 1;
    long long cur = arr[j];

    while (i < j) {
        long long maxp = arr[j];  // Maximum power currently

        if (cur <= d) {
            // Take a player from the left
            i++;
            cur += maxp;
        } else {
            wins++;
            j--;

            if (j >= 0) cur = arr[j];
        }
    }

    cout << wins << endl;
}

int main() {
    
        solve();
    
    return 0;
}