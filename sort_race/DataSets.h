#pragma once
#include <vector>

//datasets by TM
std::vector<int> GenerateData(int size, int max_value = INT_MAX);
std::vector<double> GenerateDoubleData();


//datasets by <Laputin>
std::vector <int> LaputinTeamGenerateBestDataRadixLSD(int size);
std::vector <int> LaputinTeamGenerateWorstDataRadixLSD(int size);
std::vector <int> LaputinTeamGenerateNormalDataRadixLSD(int size);

std::vector<int> LaputinTeamGenerateNormalDataTimsort(int size);
std::vector<int> LaputinTeamGenerateBestDataTimsort(int size);
std::vector<int> LaputinTeamGenerateWorstDataTimsort(int size);

std::vector<int> LaputinTeamGenerateBestDataQuicksort(int size);
std::vector<int> LaputinTeamGenerateNormalDataQuicksort(int size);
std::vector<int> LaputinTeamGenerateWorstDataQuicksort(int size);
//or include your "datasets_by_<comandname>.h" above



