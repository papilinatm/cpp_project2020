#include <vector>
using namespace std;

template<typename T>
void quick_sort(vector<T>& arr, int low, int high);

vector<int> quick_sort_by_gerasimoff(vector<int> arr)
{
    quick_sort(arr, 0, arr.size() - 1);
    return arr;
}

vector<double> quick_sort_by_gerasimoff(vector<double> arr)
{
    quick_sort(arr, 0, arr.size() - 1);
    return arr;
}


template<typename T>
int delimiter(vector<T>& arr, int low, int high)
{
    auto pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            auto temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    auto temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

template<typename T>
void quick_sort(vector<T>& arr, int low, int high)
{
    if (low < high)
    {
        int delim = delimiter(arr, low, high);

        quick_sort(arr, low, delim - 1);
        quick_sort(arr, delim + 1, high);
    }
}