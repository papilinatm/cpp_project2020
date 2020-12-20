#pragma once
#include <vector>

//datasets by TM
std::vector<int> GenerateData(int size, int max_value = INT_MAX);
std::vector<double> GenerateDoubleData();


//datasets by <comandname>
std::vector<int> BadForKaryaginTkachevTeam(int size)
{
	std::vector<int> data;
	for (int i = 1; i < size; i++)
		data.push_back(i);
	return data;
}
//place your datasets here 
//or include your "datasets_by_<comandname>.h" above


