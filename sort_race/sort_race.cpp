// sort_race.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <array>
#include <vector>
#include <string>

#include "heap_sort_bottomup_by_Laputin.h"
#include "RadixSortLSD_by_Absalyamov.h"
#include "Timsort_by_Seregin.h"

#include "DataGenerators.h"

using namespace std;

vector<int> GenerateIntData(int size, int max_value = INT_MAX);
using ParticipantInt = std::vector<int>(*)(std::vector<int>);
void RunInt(string method_name, ParticipantInt p, vector<int> data);

vector<double> GenerateDoubleData(int size, int max_value = INT_MAX);
using ParticipantDouble = std::vector<double>(*)(std::vector<double>);
void RunDouble(string method_name, ParticipantDouble p, vector<double> data);


#define RUN_INT(x) {                \
    RunInt(#x, x, data);           \
}

#define RUN_DOUBLE(x) {                \
    RunDouble(#x, x, data);           \
}

//place your method name here
vector<int> std_sort(vector<int>);
vector<double> std_sort_double(vector<double> data);

void PrintMainMenu() {
    cout << "\n"
        << "1. Sort integer array" << "\n"
        << "2. Sort double array" << "\n"
        << "3. Sort best/normal/worst data" << "\n"
        << "0. Exit" << endl;
}

void PrintUserMenu() {
    cout << "\n"
        << "1. Bottom Up Heap sort by Laputin" << "\n"
        << "2. Radix sort(LSD) by Absalyamov" << "\n"
        << "3. Quick sort by Ageenko" << "\n"
        << "4. Timsort by Seregin" << "\n"
        << "0. exit" << endl;
}

void PrintSortMenu() {
    cout << "\n"
        << "1. Best case" << "\n"
        << "2. Normal case" << "\n"
        << "3. Worst case" << "\n"
        << "0. back" << endl;
}

template <typename T>
T GetCorrectNumber(std::string text, T min, T max)
{
    T parameter;
    std::cout << text;
    while (!(std::cin >> parameter) || parameter < min || parameter > max) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << text;
    }
    return parameter;
}

int main()
{
    while (true) {
        PrintMainMenu();
        int choice = GetCorrectNumber("Your choice (0-3): ", 0, 3);
        if (choice == 1) {
            const array<int, 4> N = { 10, 1'000, 10'000, 1'000'000 };
            for (int n : N)
            {
                auto data = GenerateIntData(n);
                RUN_INT(std_sort);
                RUN_INT(heapSortBotUp);
                RUN_INT(Timsort_by_Seregin);
                RUN_INT(RadixSortLSD_by_Absalyamov);
            }
        }
        else if (choice == 2) {
            const array<int, 4> N = { 10, 1'000, 10'000, 1'000'000 };
            for (int n : N)
            {
                auto data = GenerateDoubleData(n);
                RUN_DOUBLE(std_sort_double);
                RUN_DOUBLE(heapSortBotUp);
                RUN_DOUBLE(Timsort_by_Seregin);
               // RUN_DOUBLE(RadixSortLSD_by_Absalyamov);
            }
        }
        else if (choice == 3) {
            while (true) {
                PrintUserMenu();
                int choice3 = GetCorrectNumber("Your choice (0-4): ", 0, 4);
                if (choice3 == 1) {
                    // Fedor L
                    while (true) {
                        PrintSortMenu();
                        int choice31 = GetCorrectNumber("Your choice (0-3): ", 0, 3);
                        if (choice31 == 1) {
                            cout << "Best case" << endl;
                            auto data = MyGenerate(1000);
                            RUN_INT(heapSortBotUp);
                        }
                        else if (choice31 == 2) {
                            cout << "Normal case" << endl;
                        }
                        else if (choice31 == 3) {
                            cout << "Worst case" << endl;
                        }
                        else if (choice31 == 0) {
                            break;
                        }
                    
                    }
                }
                else if (choice3 == 2) {
                    // Vanya
                    while (true) {
                        PrintSortMenu();
                        int choice32 = GetCorrectNumber("Your choice (0-3): ", 0, 3);
                        if (choice32 == 1) {
                            cout << "Best case" << endl;
                            //auto data = GenerateBestDataRadixLSD(size)
                        }
                        else if (choice32 == 2) {
                            cout << "Normal case" << endl;
                            //auto data = GenerateNormalDataRadixLSDsort(size)
                        }
                        else if (choice32 == 3) {
                            cout << "Worst case" << endl;
                            //auto data = GenerateWorstDatarRadixLSDsort(size)
                        }
                        else if (choice32 == 0) {
                            break;
                        }
                    }
                }
                else if (choice3 == 3) {
                    // Kostyan
                    while (true) {
                        PrintSortMenu();
                        int choice33 = GetCorrectNumber("Your choice (0-3): ", 0, 3);
                        if (choice33 == 1) {
                            cout << "Best case" << endl;
                            //auto data = GenerateBestDataQuicksort(size)
                        }
                        else if (choice33 == 2) {
                            cout << "Normal case" << endl;
                            //auto data = GenerateNormalDataQuicksort(size)
                        }
                        else if (choice33 == 3) {
                            cout << "Worst case" << endl;
                            //auto data = GenerateWorstDataQuicksort(size)
                        }
                        else if (choice33 == 0) {
                            break;
                        }
                    }
                }
                else if (choice3 == 4) {
                    // Fedor S
                    while (true) {
                        PrintSortMenu();
                        int choice34 = GetCorrectNumber("Your choice (0-3): ", 0, 3);
                        if (choice34 == 1) {
                            cout << "Best case" << endl;
                            //auto data = GenerateBestDataTimsort(size)
                        }
                        else if (choice34 == 2) {
                            cout << "Normal case" << endl;
                            //auto data = GenerateNormalDataTimsort(size)
                        }
                        else if (choice34 == 3) {
                            cout << "Worst case" << endl;
                            //auto data = GenerateWorstDataTimsort(size)
                        }
                        else if (choice34 == 0) {
                            break;
                        }
                    }
                }
                else if (choice3 == 0) {
                    break;
                }
            }

        }
        else if (choice == 0) {
            break;
        }
        else {
            cout << "There is no clause " << choice << " in menu" << endl;
        }
    }
    cout << "\nGoodbye" << endl;
    return 0;

}
