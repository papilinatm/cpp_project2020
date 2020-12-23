#pragma once
#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> std_sort(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);

//place your method name here

//Shekhovtsova_team
std::vector<int> RadixSort_by_Shekhovtsova(std::vector<int> data);
std::vector<int> QuickSort_Efimenko(std::vector<int> data);
std::vector<int> CombSortBySuleimenovaZH(std::vector<int> data);
std::vector<int> TreeSortByIssabek(std::vector<int> a);
std::vector<double> RadixSort_by_Shekhovtsova(std::vector<double> data);
std::vector<double> QuickSort_Efimenko(std::vector<double> data);
std::vector<double> CombSortBySuleimenovaZH(std::vector<double> data);
std::vector<double> TreeSortByIssabek(std::vector<double> a);