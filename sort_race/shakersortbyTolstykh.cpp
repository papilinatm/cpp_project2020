#include <vector>
#include <string>
using namespace std;

vector<int> ShakerSortTolstykh(vector<int> data) {
    int left = 0;
    int right = data.size() - 1;
    while (left <= right) {
        for (int i = right; i > left; --i) {
            if (data[i - 1] > data[i]) {
                swap(data[i - 1], data[i]);
            }
        }
        ++left;
        for (int i = left; i < right; ++i) {
            if (data[i] > data[i + 1]) {
                swap(data[i], data[i + 1]);
            }
        }
        --right;
    }
    return data;
}

vector<double> ShakerSortdoubleTolstykh(vector<double> data) {
    int left = 0;
    int right = data.size() - 1;
    while (left <= right) {
        for (int i = right; i > left; --i) {
            if (data[i - 1] > data[i]) {
                swap(data[i - 1], data[i]);
            }
        }
        ++left;
        for (int i = left; i < right; ++i) {
            if (data[i] > data[i + 1]) {
                swap(data[i], data[i + 1]);
            }
        }
        --right;
    }
    return data;
}
