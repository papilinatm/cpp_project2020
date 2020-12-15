#include <vector>
#include <algorithm>
#include "DataGenerators.h"

using namespace std;

vector<int> MyGenerate(int size) {
	vector<int> data(size);
	for (int& i : data) {
		i = 156446465141;
	}
	return data;
}
vector <int> GenerateBestDataRadixLSD(int size) {
    vector <int>data(size);
    for (int& i : data)
        i = rand() % 10;
    return data;
}
// GENERATORS OF DIFFERENT INPUT DATA SCENARIOS FOR TIMSORT
vector<int> GenerateNormalDataTimsort(int size)
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
    data.resize(size);
    return data;
}
vector <int> GenerateWorstDataRadixLSD(int size) {
    vector <int>data(size);
    for (int& i : data)
        i = 1000000 + rand() % 8000000;
    return data;
}
vector<int> GenerateBestDataTimsort(int size)
{
    int i = INT_MAX;
    vector<int> data(size);
    for (int& d : data)
        d = i--;
    return data;
}

vector<int> GenerateWorstDataTimsort(int size)
{
    int i = 2 + rand() / INT_MAX;
    vector<int> data(size);
    bool Flag = true;
    for (int& d : data)
    {
        d = (Flag) ? i-- : i++;
        Flag = !Flag;
    }
    return data;
}
vector <int> GenerateNormalDataRadixLSD(int size) {
	vector <int>data(size);
	for (int& i : data)
		i = 1000 + rand() %8000;
	return data;
}

vector<int> GenerateBestDataQuicksort(int size) {
    vector<int> data(size);
    for (int& i : data) {//если идет разбиение на n/2 и n/2-1 элементов каждый раз(или близко к этому)
       i = i = 100 + rand() % 5000;
    }
    return data;
}

vector<int> GenerateNormalDataQuicksort(int size) {
    vector<int> data(size);
    for (int& i : data) {
        i = 100 + rand() % 5000;
    }

    return data;
}

vector<int> GenerateWorstDataQuicksort(int size) { // если идет разбиение на n-1 и 0 элементов каждый раз
    vector<int> data(size);
    for (int& i : data){
        i = 100 + rand() % 5000;
    }
    sort(data.begin(), data.end());
    return data;
}