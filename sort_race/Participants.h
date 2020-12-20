#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> std_sort(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);


//place your method name here
//--------------------Team Badeev---------------------------
std::vector<int> MergeSort_by_Badeev(std::vector<int> mas);
std::vector<double> MergeSort_by_Badeev(std::vector<double> mas);
//---------------------------------------------------------------
//place your method name here

#pragma once
