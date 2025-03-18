#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int low, int middle, int high) {
    vector<int> temp;
    int left = low;
    int right = middle + 1;

    while (left <= middle && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= middle) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low, j = 0; i <= high; i++, j++) {
        arr[i] = temp[j];
    }
}

void merge_sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int middle = (low + high) / 2;
        merge_sort(arr, low, middle);
        merge_sort(arr, middle + 1, high);
        merge(arr, low, middle, high);
    }
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        arr.push_back(value);
    }

    int low = 0;
    int high = arr.size() - 1;
    merge_sort(arr, low, high);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
