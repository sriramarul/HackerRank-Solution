class Solution {
public:
	int findKthPositive(vector<int>& arr, int k) {
		int arr1[2000] = {0};
		for (int i = 0; i < 2000; i++) {
			arr1[i] = i + 1;
		}
		for (int i = 0; i < arr.size(); i++) {
			arr1[arr[i] - 1] = 0;
		}
		int count = 0, output = 0;
		for (int i = 0; i < 2000; i++) {
			if (count == k - 1 && arr1[i] != 0) {
				output = arr1[i];
				break;
			} else if (arr1[i] != 0) {
				count++;

			}
		}

		return output;
	}
};