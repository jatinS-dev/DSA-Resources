int findFloor(vector<int>& arr, int key) {
    int low = 0, high = arr.size() - 1;
    int floorIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) {
            floorIndex = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return floorIndex;
}

int findCeil(vector<int>& arr, int key) {
    int low = 0, high = arr.size() - 1;
    int ceilIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) return mid;
        else if (arr[mid] > key) {
            ceilIndex = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ceilIndex;
}
