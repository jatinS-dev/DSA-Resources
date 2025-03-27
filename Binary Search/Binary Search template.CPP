void solve() {
	int n;
	cin >> n;
	vector<int> nums;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		nums.push_back(t);
	}
	int target;
	cin >> target;

	int start = 0;
	int end = n - 1;

	while (start <= end) {
		int mid = start + (end - start) / 2;
		if (nums[mid] == target) {
			cout << "target found at position : " << mid << endl;
			return; // Exit the function after finding the target
		}
		else if (nums[mid] < target) {
			end = mid - 1;  // Fix: Change `nums[mid] + 1` to `mid + 1`
		}
		else {
			start = mid + 1;    // Fix: Change `nums[mid] - 1` to `mid - 1`
		}
	}
	cout << "element not found\n";
}
