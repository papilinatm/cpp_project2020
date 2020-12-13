#pragma once
#include <vector>
//#include <algorithm>

using namespace std;

int GetMinrun(int N)
{
    while (N >= 64)
        N /= 2;
    return N;
}

template <typename T>
void insertionSort(vector<T>& data, int start, int end)
{
    int i, j, key;
    for (i = start + 1; i <= end; i++)
    {
        key = data[i];
        j = i - 1;
        while (j >= start && data[j] > key)
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

template <typename T>
void merge(vector<T>& data, pair<int, int> X, pair<int, int> Y)
{
    vector<int> Xrun(data.begin() + X.first, data.begin() + X.first + X.second);
    int i = X.first;
    int iX = 0, iY = Y.first;
    bool IsEmpty = false;
    while (i < Y.first + Y.second && !IsEmpty)
    {
        if (iX < X.second)
        {
            if (iY < Y.first + Y.second)
            {
                if (Xrun[iX] < data[iY])
                    data[i] = Xrun[iX++];
                else
                    data[i] = data[iY++];
            }
            else
            {
                data[i] = Xrun[iX++];
            }
        }
        else
        {
            IsEmpty = true;
        }
        i++;
    }

}

template <typename T>
vector<T> Timsort_by_Seregin(vector<T> data)
{
    int N = data.size();
    int minrun = GetMinrun(N);
    int Index = 0;
    int nextIndex = Index + 1;
    vector <pair<int, int>> minruns;

    while (Index < N)
    {
        int RunStart = Index;
        int RunEnd = Index;
        while (data[Index] < data[nextIndex] && nextIndex < N - 1)
        {
            Index++;
            nextIndex++;
        }
        RunEnd = Index;
        if (Index - RunStart + 1 < minrun && Index < N - 1)
        {
            if (N - minrun < Index)
                RunEnd = N - 1;
            else
                RunEnd = RunStart + minrun - 1;
        }
        else
        {
            if (Index < N - 1)
            {
                Index++;
            }
            RunEnd = Index;
        }
        Index = RunEnd + 1;
        nextIndex = Index + 1;
        minruns.push_back(make_pair(RunStart, RunEnd - RunStart + 1));
        insertionSort(data, RunStart, RunEnd);
    }

    while (minruns.size() >= 2)
    {
        int i = 0;
        bool IsMerged = false;
        while (i < minruns.size() - 2 && !IsMerged)
        {
            if (minruns[i].second < minruns[i + 1].second + minruns[i + 2].second)
            {
                merge(data, minruns[i], minruns[i + 1]);
                minruns[i].second += minruns[i + 1].second;
                minruns.erase(minruns.begin() + i + 1);
                IsMerged = true;
            }
            i++;
        }
        if (!IsMerged)
        {
            merge(data, minruns[i], minruns[i + 1]);
            minruns[i].second += minruns[i + 1].second;
            minruns.erase(minruns.begin() + i + 1);
        }
    }

    return data;
}

vector<int> GenerateDataPartiallySorted(int size)
{
    vector<int> data;
    while (data.size() < size)
    {
        int sequance = rand() % 512;
        vector<int> seq(sequance);
        for (int& d : seq)
            d = rand() % INT_MAX;
        sort(seq.begin(), seq.end());
        data.insert(data.end(), seq.begin(), seq.end());
    }
    return data;
}
