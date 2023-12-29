#include<bits/stdc++.h>
using namespace std;

void solve(int ind, vector<int> &ds, int arr[], int n) {
    if (ind == n) {
        for (auto it : ds) {
            cout << it << " ";
        }
        cout << endl;
        // This return is important
        return;
    }
    ds.push_back(arr[ind]);
    solve(ind + 1, ds, arr, n);
    ds.pop_back();
    solve(ind + 1, ds, arr, n);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = 3;
    vector<int> ds;
    solve(0, ds, arr, n);

    return 0;
}
