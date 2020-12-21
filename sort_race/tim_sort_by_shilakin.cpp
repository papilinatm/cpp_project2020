#include <vector>
#include <algorithm>
using namespace std;



template<typename T>
void InsertionSort(vector<T> &sort, int begin, int end) {
    int j, i;
	for (i = begin + 1; i <= end; i++) 
		for (j = i; j > begin && sort[j-1] > sort[j]; j--) 
			swap(sort[j - 1], sort[j]);
    return;
}

template<typename T>
void merge(vector<T> &sort, int begin, int mid, int end){
    vector<T> left, right;
    int left_size = mid - begin + 1, right_size = end - mid;
    left.resize(left_size);
    right.resize(right_size);

    for (int i = 0; i < left_size; i++)
        left[i] = sort[begin + i];
    for (int i = 0; i < right_size; i++)
        right[i] = sort[mid + 1 + i];

    int l = 0;
    int r = 0;
    int i = begin;

    while (l < left_size && r < right_size){
        if (left[l] <= right[r])
            sort[i++] = left[l++];
        else sort[i++] = right[r++];
    }
    while (l < left_size)
        sort[i++] = left[l++];

    while (r < right_size)
        sort[i++] = right[r++];
}

vector<double> tim_sort_by_shilakin(vector<double> sort) {
    int RUN = 32;
    for (int i = 0; i < sort.size(); i += RUN)
        InsertionSort(sort, i, min((i + RUN - 1), int(sort.size() - 1)));

    for (int size = RUN; size < sort.size(); size = 2 * size) {
        for (int left = 0; left < sort.size(); left += 2 * size) {
            int mid = left + size - 1;
            int right = min((left + 2 * size - 1), int(sort.size() - 1));
            merge(sort, left, mid, right);
        }
    }
    return sort;
}

vector<int> tim_sort_by_shilakin(vector<int> sort) {
    int RUN = 32;
    
    for (int i = 0; i < sort.size(); i += RUN)
        InsertionSort(sort, i, min((i + RUN-1), int(sort.size() - 1)));

    for (int size = RUN; size < sort.size(); size = 2 * size) {
        for (int left = 0; left < sort.size(); left += 2 * size) {
            int right = min((left + 2 * size - 1), int(sort.size() - 1));
            int mid = left + size - 1;

            merge(sort, left, mid, right);
        }
    }
    return sort;
}