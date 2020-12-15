#pragma once
#include <vector>
using namespace std;

template<typename T>
int Partition(vector<T>& data, int l, int r) {  
    T x = data[r];  
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

template<typename T>
void QuickSortImpl(vector<T>& data, int l, int r) {
    if (l < r) {
        int q = Partition(data, l, r);
        QuickSortImpl(data, l, q - 1);
        QuickSortImpl(data, q + 1, r);
    }
}

template<typename T>
void QuickSort(vector<T>& data) {
    if (!data.empty()) {
        QuickSortImpl(data, 0, data.size() - 1);
    }
}

template<typename T>
vector<T> QuickSort_by_Ageenko(vector<T> data) {
    QuickSort(data);
    return data;
}
