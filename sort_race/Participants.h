#pragma once
#include <vector>

template <typename T>
using Participant = std::vector<T>(*)(std::vector<T>);

std::vector<int> std_sort(std::vector<int>);
std::vector<double> sort_for_integers_only(std::vector<double> data);

//place your method name here
//--------------------Team Laputin---------------------------
#include "heap_sort_bottomup_by_Laputin.h"
#include "QuickSort_by_Ageenko.h"
std::vector<int> RadixSortLSD_by_Absalyamov(std::vector<int> data);
std::vector<double> RadixSortLSD_by_Absalyamov(std::vector<double> data);
#include "Merge_sort_by_Niyazmuhammedow.h"
#include "Timsort_by_Seregin.h"
//---------------------------------------------------------------
