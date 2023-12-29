#include<bits/stdc++.h>
using namespace std;

bool flag = false;
void solve(int ind, vector<int> &ls, int n, int arr[], int sum, int s) {
    if (ind == n ) {
        if (s == sum && flag == false) {
            for (auto it : ls) cout << it << " ";
            cout << endl;
            flag = true;
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
    int arr[] = {1, 2, 1, 1, 2, 1, 2};
    int n = 7;
    int sum = 3;
    vector<int> ls;
    solve(0, ls, n, arr, sum, 0);
    return 0;
}
