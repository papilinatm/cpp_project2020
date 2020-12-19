#pragma once
#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> std_sort(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);

//place your method name here

std::vector<int> merge_sort_by_iliushik(std::vector<int> data);
std::vector<double> merge_sort_by_iliushik(std::vector<double> data);