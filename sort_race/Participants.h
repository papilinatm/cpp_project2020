#pragma once
#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> std_sort(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);
std::vector<int> heapsort_by_polyakov(std::vector<int> to_sort);
std::vector<double> heapsort_by_polyakov(std::vector<double> to_sort);

//place your method name here
std::vector<int> shellsort_by_kamenshchikov(std::vector<int> to_sort);
std::vector<double> shellsort_by_kamenshchikov(std::vector<double> to_sort);

std::vector<int> merge_sort_by_iliushik(std::vector<int> data);
std::vector<double> merge_sort_by_iliushik(std::vector<double> data);

std::vector<double> quick_sort_by_Shabalinov(std::vector<double> data);
std::vector<int> quick_sort_by_Shabalinov(std::vector<int> data);