#include<bits/stdc++.h>
using namespace std;

void solve(int ind, vector<int> &ls, int n, int arr[], int sum, int s) {
    if (ind == n ) {
        if (s == sum) {
            for (auto it : ls) cout << it << " ";
            cout << endl;
        }
        return;
    }
    ls.push_back(arr[ind]);
    s += arr[ind];
    solve(ind + 1, ls, n, arr, sum, s);

    s -= arr[ind];
    ls.pop_back();
    solve(ind + 1, ls, n, arr, sum, s);
}
int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ls;
    solve(0, ls, n, arr, sum, 0);
    return 0;
}
