#pragma once
#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> std_sort(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);


//place your method name here
//--------------------Team Ahmatzyanov---------------------------
std::vector<int> binaryheap_by_Salikhova(std::vector<int> data);
std::vector<double> binaryheap_by_Salikhova(std::vector<double> data);
std::vector<int> tim_sort_by_Taishev(std::vector<int> data);
std::vector<double> tim_sort_by_Taishev(std::vector<double> data);
std::vector<int> quickSort_by_Ahmatzyanov(std::vector<int> data);
std::vector<double> quickSort_by_Ahmatzyanov(std::vector<double> data);
std::vector<int> merge_sort_by_Burlin(std::vector<int> data);
std::vector<double> merge_sort_by_Burlin(std::vector<double> data);
std::vector <int> combSort_by_Ismailova(std::vector<int> data);
//---------------------------------------------------------------

//Shekhovtsova_team
std::vector<int> RadixSort_by_Shekhovtsova(std::vector<int> data);
std::vector<int> QuickSort_Efimenko(std::vector<int> data);
std::vector<int> CombSortBySuleimenovaZH(std::vector<int> data);
std::vector<int> TreeSortByIssabek(std::vector<int> a);
std::vector<double> RadixSort_by_Shekhovtsova(std::vector<double> data);
std::vector<double> QuickSort_Efimenko(std::vector<double> data);
std::vector<double> CombSortBySuleimenovaZH(std::vector<double> data);
std::vector<double> TreeSortByIssabek(std::vector<double> a);
