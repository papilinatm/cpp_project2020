#include <vector>
#include <array>
#include <iostream>
using namespace std;

template <typename T>
void CombSortBySuleimenova(vector<T>& data, int n)
{
    int i, j, gap; 
    bool swapped = 1;
    double temp;
    gap = n;
    while (gap > 1 || swapped == 1) 
    {
        gap = gap * 10 / 1.3;
        if (gap == 9 || gap == 10) 
        {
            gap = 11;
        }
        if (gap < 1) 
        {
            gap = 1;
        }
        swapped = 0;
        for (i = 0, j = gap; j < n; i++, j++) 
        {
            if (data[i] > data[j]) 
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
                swapped = 1;
            }
        }
    }
}

template <typename T>
void CombSort_Suleimenova(vector<T>& data)// sortirovka vectora
{
    int i;
    int n = size(data);
    for (i = 0; i < n; i++)
    {
        CombSortBySuleimenova(data, n);
    }
}

vector<int> CombSortBySuleimenovaZH(vector<int> data)
{
    CombSort_Suleimenova(data);
    return data;
}
vector<double> CombSortBySuleimenovaZH(vector<double> data) 
{
    CombSort_Suleimenova(data);
    return data;
}