#include <vector>
using namespace std;


int Partition(vector<int>& data, int l, int r) {
    int x = data[r];
    int less = l;

    for (int i = l; i < r; ++i) {
        if (data[i] <= x) {
            swap(data[i], data[less]);
            ++less;
        }
    }
    swap(data[less], data[r]);
    return less;
}

void QuickSortImpl(vector<int>& data, int l, int r) {
    if (l < r) {
        int q = Partition(data, l, r);
        QuickSortImpl(data, l, q - 1);
        QuickSortImpl(data, q + 1, r);
    }
}

void QuickSort(vector<int>& data) {
    if (!data.empty()) {
        QuickSortImpl(data, 0, data.size() - 1);
    }
}

vector<int> QuickSort_by_Ageenko(vector<int> data) {
    QuickSort(data);
    return data;
}

