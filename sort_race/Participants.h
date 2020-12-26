#pragma once
#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> std_sort(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);


//place your method name here
//--------------------Team Badeev---------------------------
std::vector<int> MergeSort_by_Badeev(std::vector<int> mas);
std::vector<double> MergeSort_by_Badeev(std::vector<double> mas);
std::vector<int> CombSortInt_Schekotovskaya(std::vector<int> data);
std::vector<double> CombSortDouble_Schekotovskaya(std::vector<double> data);
std::vector<int> int_QuickSort_by_Knyazkin(std::vector<int> data);
std::vector<int> ShakerSortTolstykh(std::vector<int> data);
std::vector<double> ShakerSortdoubleTolstykh(std::vector<double> data);

//std::vector<double> double_QuickSort_by_Knyazkin(std::vector<double> data);
//---------------------------------------------------------------
//place your method name here


