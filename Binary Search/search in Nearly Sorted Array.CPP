int searchNearlySortedArray(vector<int>& arr, int key) {
    int n = arr.size();
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check mid, mid-1, and mid+1
        if (arr[mid] == key) return mid;
        if (mid - 1 >= low && arr[mid - 1] == key) return mid - 1;
        if (mid + 1 <= high && arr[mid + 1] == key) return mid + 1;

        // Adjust search range
        if (arr[mid] > key) high = mid - 2;
        else low = mid + 2;
    }
    return -1;
}
