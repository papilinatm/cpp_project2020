// sort_race.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <array>
#include <vector>
#include <string>

using namespace std;

vector<int> GenerateData(int size, int max_value = INT_MAX);
vector<double> GenerateDoubleData(int size);
vector<int> GenerateNegativeData(int size, int max_value = INT_MAX);

using Participant = std::vector<int>(*)(std::vector<int>);
using ParticipantDouble = std::vector<double>(*)(std::vector<double>);

void Run(string method_name, Participant p, vector<int> data);
void RunForDoubles(string method_name, ParticipantDouble p, vector<double> data);

int GetCorrectNumber(std::string text, int min, int max);


#define RUN(x) {                \
    Run(#x, x, data);           \
}

#define RUNDOUBLE(x) {                \
    RunForDoubles(#x, x, data);       \
}   

vector<double> double_myMergeSort(vector<double> mas);
vector<int> std_sort_for_integers(vector<int>);
vector<int> int_myMergeSort(vector<int> mas);
vector<double> std_sort_for_doubles(vector<double> data);

int main()
{
    const array<int, 4> N = { 10, 1'000, 10'000, 1'000'000 };
    cout << "1 - sort integer array" << endl << "2 - sort doudle array" << endl << "3 - sort negative array" << endl;
    int Choise = GetCorrectNumber("Action", 1, 3);
    if (Choise == 1) {
        for (int n : N)
        {
            auto data = GenerateData(n);
            RUN(std_sort_for_integers);
            RUN(int_myMergeSort);
        }
    }
    if (Choise == 2) {
        for (int n : N)
        {
            auto data = GenerateDoubleData(n);
            RUNDOUBLE(std_sort_for_doubles);
            RUNDOUBLE(double_myMergeSort);
        }
    }
    if (Choise == 3) {
        for (int n : N)
        {
            auto data = GenerateNegativeData(n);
            RUN(std_sort_for_integers);
            RUN(int_myMergeSort);
        }
    }
}
