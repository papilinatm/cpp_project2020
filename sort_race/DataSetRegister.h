#pragma once
#include <string>
#include "DataSets.h"

template <typename T>
struct DataSet
{
    std::string description;
    std::vector<T> data;
};
std::vector<DataSet<int>> GenerateIntDataSets()
{
    return {
        { "random integer", GenerateData(10) },
        { "random integer", GenerateData(100) },
        { "random integer", GenerateData(1000) },
        { "Worst Radix Sort Test Laputin Team", LaputinTeamGenerateWorstDataRadixLSD(1000)},
        { "Normal Radix Sort Test Laputin Team", LaputinTeamGenerateNormalDataRadixLSD(1000)},
        { "Best Radix Sort Test Laputin Team", LaputinTeamGenerateBestDataRadixLSD(1000)},
        { "Worst Quick Sort Test Laputin Team", LaputinTeamGenerateWorstDataQuicksort(1000)},
        { "Normal Quick Sort Test Laputin Team", LaputinTeamGenerateNormalDataQuicksort(1000)},
        { "Best Quick Sort Test Laputin Team", LaputinTeamGenerateBestDataQuicksort(1000)},
        { "Worst Team Sort Test Laputin Team", LaputinTeamGenerateWorstDataTimsort(1000)},
        { "Normal Team Sort Test Laputin Team", LaputinTeamGenerateNormalDataTimsort(1000)},
        { "Best Team Sort Test Laputin Team", LaputinTeamGenerateBestDataTimsort(1000)},
    };
}
std::vector<DataSet<double>> GenerateDoubleDataSets()
{
    return {
       { "asc sorted double", {1.0, 2.0} },
       { "desc sorted double", {3.0,2.0} },
       { "just doubles", GenerateDoubleData() },
    };
}