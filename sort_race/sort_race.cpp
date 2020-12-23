// sort_race.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <vector>
#include <chrono>
#include <algorithm>
#include <string>
#include <iostream>
#include "DataSetRegister.h"
#include "Participants.h"

using namespace std;

#define RUN(x) {                \
    Run(#x, x, data);           \
}
template <typename T>
void Run(string method_name, Participant<T> p, vector<T> data)
{
    auto start = chrono::system_clock::now();
    vector<T> res = p(data);
    auto stop = chrono::system_clock::now();
    auto time = chrono::duration_cast<chrono::microseconds>(stop - start).count();

    cout << method_name << "\t"
        << data.size() << "\t"
        << (is_sorted(res.begin(), res.end()) ? to_string(time) + "\tmcs" : "failed") << endl;
}

int main()
{
    auto intDataSets = GenerateIntDataSets();
    for (auto& ds : intDataSets)
    {
        cout << ds.description << endl << endl;
        auto& data = ds.data;
        RUN(std_sort);
        //AhmatzyanovTeam
        RUN(binaryheap_by_Salikhova);
        RUN(tim_sort_by_Taishev);
        RUN(quickSort_by_Ahmatzyanov);
        RUN(merge_sort_by_Burlin);
        RUN(combSort_by_Ismailova);
        //ShuranskyTeam
        RUN(MergeSortByShuranskiy);
        RUN(QuickSort_Pashayan);
        RUN(HeapSortByGabrielian);
        RUN(BitonicSortBySharnin);
        //Shekhovtsova_team
        RUN(RadixSort_by_Shekhovtsova);
        RUN(QuickSort_Efimenko);
        RUN(TreeSortByIssabek);
        RUN(CombSortBySuleimenovaZH);
        //KononenkoTeam
        RUN(CombSortByKononenko);
        RUN(ShellSort_by_Skriplyuk);
        RUN(mergeSortByMalakhov);
        RUN(quickSortbyMaltsev);        
        // Tkachev Team
        RUN(countingSortByTkachev);
        RUN(QuickSortByKaryagin);
        RUN(merge_sort_by_Kotova);
        RUN(HeapSortByKulagina);
        //BaveevTeam
        RUN(MergeSort_by_Badeev);
        RUN(int_QuickSort_by_Knyazkin);
        RUN(CombSortInt_Schekotovskaya);
        //LaputinTeam
        RUN(HeapSortBotUp_by_Laputin);
        RUN(QuickSort_by_Ageenko);
        //RUN(RadixSortLSD_by_Absalyamov);
        //RUN(Timsort_by_Seregin);
        RUN(Merge_sort_by_Niyazmuhammedow);
        //DanilovaTeam
        RUN(merge_sort_by_danilova);
        RUN(Insertion_sort_Stepuro);
        RUN(heapsort_by_makarov);
        RUN(QuickSort_by_Byankina);
        RUN(Sort_by_Igoshkina);

        //SimonovTeam
        RUN(quicksort_By_Simonov);
        RUN(shellsort_By_Chiganov);
        RUN(insertsort_by_Safonov);
        RUN(mergeSort_by_Pulkov);
        RUN(smooth_Samedov);
        
        //ShilakinTeam
        RUN(quick_sort_by_gerasimoff);
        RUN(tim_sort_by_shilakin);
        RUN(merge_sort_by_vasiutin);

        cout << endl << "**************************" << endl << endl;
    }

    auto doubleDataSets = GenerateDoubleDataSets();
    for (auto& ds : doubleDataSets)
    {
        cout << ds.description << endl << endl;
        auto& data = ds.data;
        RUN(sort_for_integers_only);
        //AhmatzyanovTeam
        RUN(binaryheap_by_Salikhova);
        RUN(tim_sort_by_Taishev);
        RUN(quickSort_by_Ahmatzyanov);
        RUN(merge_sort_by_Burlin);
        //ShuranskyTeam
        RUN(MergeSortByShuranskiy);
        RUN(QuickSort_Pashayan);
        RUN(HeapSortByGabrielian);
        RUN(BitonicSortBySharnin);
        //Shekhovtsova_team
        RUN(RadixSort_by_Shekhovtsova);
        RUN(QuickSort_Efimenko);
        RUN(TreeSortByIssabek);
        RUN(CombSortBySuleimenovaZH);
        //KononenkoTeam
        RUN(CombSortByKononenko);
        RUN(ShellSort_by_Skriplyuk);
        RUN(mergeSortByMalakhov);
        RUN(quickSortbyMaltsev);
        // Tkachev Team
        RUN(countingSortByTkachev);
        RUN(QuickSortByKaryagin);
        RUN(merge_sort_by_Kotova);
        RUN(HeapSortByKulagina);
        //BaveevTeam
        RUN(MergeSort_by_Badeev);
        //RUN(double_QuickSort_by_Knyazkin);
        RUN(CombSortDouble_Schekotovskaya);
        //LaputinTeam
        RUN(HeapSortBotUp_by_Laputin);
        RUN(QuickSort_by_Ageenko);
        //RUN(RadixSortLSD_by_Absalyamov);
        //RUN(Timsort_by_Seregin);
        RUN(Merge_sort_by_Niyazmuhammedow);
        //DanilovaTeam
        RUN(merge_sort_by_danilova);
        RUN(Insertion_sort_Stepuro);
        RUN(heapsort_by_makarov_d);
        RUN(QuickSort_by_Byankina);
        RUN(Sort_by_Igoshkina_d);
        //SimonovTeam
        RUN(quicksort_By_Simonov);
        RUN(shellsort_By_Chiganov);
        RUN(insertsort_by_Safonov);
        RUN(mergeSort_by_Pulkov);
        //ShilakinTeam
        RUN(quick_sort_by_gerasimoff);
        RUN(tim_sort_by_shilakin);
        RUN(merge_sort_by_vasiutin);

        cout << endl << "**************************" << endl << endl;
    }
}
