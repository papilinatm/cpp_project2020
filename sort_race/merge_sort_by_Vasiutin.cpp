//https://drive.google.com/drive/folders/1H6aRLBoLaRta_iDyv_hwVaUbvrj0D-eC?usp=sharing
#include <vector>
using namespace std;

void merge(vector<int> &sort, int low, int mid, int high)
{
    vector<int> temp;
    temp.resize(sort.size());
    int i = low;
    int j = mid + 1;
    long int k = 0;

    while (i <= mid && j <= high)
    {
        if (sort[i] <= sort[j])
            temp[k++] = sort[i++];
        else
            temp[k++] = sort[j++];
    }
    while (i <= mid)
        temp[k++] = sort[i++];
    while (j <= high)
        temp[k++] = sort[j++];
    k--;
    while (k >= 0)
    {
        sort[k + low] = temp[k];
        k--;
    }
}

void mergeSort(vector<int> &sort, int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(sort, low, mid);
        mergeSort(sort, mid + 1, high);
        merge(sort, low, mid,high);
    }
}


void merge(vector<double> &sort, int low, int mid, int high)
{
    vector<double> temp;
    temp.resize(sort.size());
    int i = low;
    int j = mid + 1;
    long int k = 0;

    while (i <= mid && j <= high)
    {
        if (sort[i] <= sort[j])
            temp[k++] = sort[i++];
        else
            temp[k++] = sort[j++];
    }
    while (i <= mid)
        temp[k++] = sort[i++];
    while (j <= high)
        temp[k++] = sort[j++];
    k--;
    while (k >= 0)
    {
        sort[k + low] = temp[k];
        k--;
    }
}

void mergeSort(vector<double> &sort, int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(sort, low, mid);
        mergeSort(sort, mid + 1, high);
        merge(sort, low, mid,high);
    }
}
vector<int> merge_sort_by_vasiutin(vector<int> sort)
{
    mergeSort(sort, 0, (sort.size()) - 1);
    return sort;
}

vector<double> merge_sort_by_vasiutin(vector<double> sort)
{
    mergeSort(sort, 0, (sort.size()) - 1);
    return sort;
}
