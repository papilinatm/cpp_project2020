#pragma once
#include <vector>

//datasets by TM
std::vector<int> GenerateData(int size, int max_value = INT_MAX);
std::vector<double> GenerateDoubleData();


//datasets by <comandname>
//place your datasets here 
//or include your "datasets_by_<comandname>.h" above

// Kononenko team 
std::vector<int> NegativeIntegerGenerateData(int size, int max_value = INT_MAX);
std::vector<double> NegativeDuobleGenerateData(double size, int max_value = INT_MAX);
std::vector<int> SemiSortedIntegerGenerateData(int size, int max_value = INT_MAX);
std::vector<double> SemiSortedDoubleGenerateData(double size, int max_value = INT_MAX);
std::vector<int> FullSortedIntegerGenerateData(int size, int max_value = INT_MAX);
std::vector<double> FullSortedDoubleGenerateData(double size, int max_value = INT_MAX);

