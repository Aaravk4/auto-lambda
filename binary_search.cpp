#include <iostream>

using namespace std;

bool binary_search(auto a[], auto k, auto n) {
    int l = 0;
    int r = n - 1;
    sort(a, a + n);
    while (l <= r) {
        int mid = l + (r - l) / 2;
        auto chk = a[mid];
        if (chk == k) {
            return true;
        }
        else if (chk > k) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return false;
}
int main() {

    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]); // Số lượng phần tử trong mảng

    int key = 23;

    bool result = binary_search(arr, key, n);

    if (result) {
        cout << "Number " << key << " is found in the array." << endl;
    } else {
        cout << "Number " << key << " is not found in the array." << endl;
    }

    return 0;
}
