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