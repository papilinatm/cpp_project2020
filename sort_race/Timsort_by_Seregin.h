#pragma once
#include <vector>
#include <iostream>
#include <utility>
#include <chrono>
#include <algorithm>

using namespace std;

int GetMinrun(int N);
void insertionSort(vector<int>& data, int start, int end);

vector<int> Timsort_by_Seregin(vector<int> data);

vector<int> GenerateDataPartiallySorted(int size);