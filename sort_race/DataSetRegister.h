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
        { "random integer for BitonicSortBySharnin", GenerateData(8) }, //to sort Bitonik it is necessary that the array contains 2 ^ n elements 
        { "random integer for BitonicSortBySharnin", GenerateData(128) },
        { "random integer for BitonicSortBySharnin", GenerateData(1024) },
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