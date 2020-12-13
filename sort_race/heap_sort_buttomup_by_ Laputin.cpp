//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// Процедура для преобразования в двоичную кучу поддерева с корневым узлом i, что является
//// индексом в arr[]. n - размер кучи
//
//int heap_leaf_search(vector<int>& arr, int start, int end) {
//
//    int current = start;
//
//    while (true) {
//        int child = current * 2 + 1;
//
//        if (child + 1 > end)
//            break;
//        if (arr[child + 1] > arr[child]) {
//            current = child + 1;
//        }
//        else {
//            current = child;
//        }
//    }
//    int child = current * 2 + 1;
//    if (child <= end)
//        current = child;
//
//    return current;
//
//}
//
//void heapify_BottomUp(vector<int>& arr, int start, int end)
//{
//    int current = heap_leaf_search(arr, start, end);
//
//    while (arr[start] > arr[current]) {
//        current = (current - 1) / 2;
//    }
//
//    int temp = arr[current];
//    arr[current] = arr[start];
//
//    while (current > start) {
//        current = (current - 1) / 2;
//        swap(temp, arr[current]);
//    }
//}
//
//// Основная функция, выполняющая пирамидальную сортировку
//vector<int> heapSortBotUp(vector<int> arr)
//{
//    // Построение кучи (перегруппируем массив)
//    int n = arr.size();
//    for (int i = n / 2 - 1; i >= 0; i--)
//        heapify_BottomUp(arr, i, n - 1);
//
//    // Один за другим извлекаем элементы из кучи
//    for (int i = n - 1; i >= 0; i--)
//    {
//        // Перемещаем текущий корень в конец
//        swap(arr[i], arr[0]);
//
//        // вызываем процедуру heapify на уменьшенной куче
//        heapify_BottomUp(arr, 0, i - 1);
//    }
//    return arr;
//}
