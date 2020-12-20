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

        //TkachevTeam data sets
        { "good case for counting sort by Tkachev", GenerateData(1000 , 50) },// less "max(data)" - better 
        //(but it would have been uninteresting to other participants, if I'd setted 3 e.g.)
        { "bad case quick sort by Karyagin ", BadForKaryaginTkachevTeam(100) },// pre-sorted
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