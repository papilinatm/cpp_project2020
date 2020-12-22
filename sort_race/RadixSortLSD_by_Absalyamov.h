#pragma once
#include <vector>
using namespace std;
//int getMax(vector<int>& v, int n)
//{
//    int mx = v[0];
//    for (int i = 1; i < n; i++)
//        if (v[i] > mx)
//            mx = v[i];
//    return mx;
//}
//void countSort(vector<int>& v, int n, int exp)
//{
//    vector<int> output(n);
//    int i, count[10] = { 0 };
//    for (i = 0; i < n; i++)
//        count[(v[i] / exp) % 10]++;
//    for (i = 1; i < 10; i++)
//        count[i] += count[i - 1];
//    for (i = n - 1; i >= 0; i--) {
//        output[count[(v[i] / exp) % 10] - 1] = v[i];
//        count[(v[i] / exp) % 10]--;
//    }
//    for (i = 0; i < n; i++)
//        v[i] = output[i];
//}
//void radixsort(vector<int>& v, int n)
//{
//    int m = getMax(v, n);
//    for (int exp = 1; m / exp > 0; exp *= 10)
//        countSort(v, n, exp);
//}

vector<int> RadixSortLSD_by_Absalyamov(vector<int> data) {
    //int size = data.size();
    //radixsort(data, size);
    return data;
}

vector<double> RadixSortLSD_by_Absalyamov(vector<double> data)
{
    return data;
}

