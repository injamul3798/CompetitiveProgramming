#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s, r;
        cin >> n >> s >> r;
        int max_val = s - r; // maximum value of the stolen die

        // print the sequence
        for (int i = 0; i < n - 1; i++) {
            cout << 1 << " ";
        }
        cout << max_val << endl;
    }

    return 0;
}
