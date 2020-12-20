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
        { "partially sorted integer", Data1_by_Shekhovtsova_team() },
        { "negative and positive integer", Data2_by_Shekhovtova_team(100) },
        { "negative and positive integer", Data2_by_Shekhovtova_team(1000) },
        { "repetitive integer", Data3_by_Shekhovtsova_team(1000) },
        { "repetitive integer", Data3_by_Shekhovtsova_team(10000) },
        { "decreasing integer", Data4_by_Shekhovtsova_team(1000) },
        { "decreasing integer", Data4_by_Shekhovtsova_team(100) },
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