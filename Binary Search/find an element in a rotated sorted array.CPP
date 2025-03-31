#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int findPivot(vector<int>& arr) {
    int n = arr.size();
    int low = 0, high = n - 1;

    while (low <= high) {
        if (arr[low] <= arr[high]) return low;

        int mid = low + (high - low) / 2;
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;

        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) return mid;
        else if (arr[mid] <= arr[high]) high = mid - 1;
        else low = mid + 1;
    }
    return 0;
}

int searchInRotatedArray(vector<int>& arr, int key) {
    int n = arr.size();
    int pivot = findPivot(arr);

    if (arr[pivot] == key) return pivot;

    if (key >= arr[0]) return binarySearch(arr, 0, pivot - 1, key);
    return binarySearch(arr, pivot, n - 1, key);
}

int main() {
    vector<int> arr = {15, 18, 2, 3, 6, 12};
    int key = 3;
    int index = searchInRotatedArray(arr, key);

    if (index != -1) cout << "Element found at index " << index << endl;
    else cout << "Element not found" << endl;

    return 0;
}
