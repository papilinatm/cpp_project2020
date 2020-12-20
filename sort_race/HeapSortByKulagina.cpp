#include <iostream>
#include <vector>

using namespace std;

void max_heapify(std::vector<int>& arr, int i, int size_)
{
	int largest, l = (2 * i) + 1, r = l + 1;
	if (l < size_ && arr[l] > arr[i])
	{
		largest = l;
	}
	else
	{
		largest = i;
	}
	if (r < size_ && arr[r] > arr[largest])
	{
		largest = r;
	}
	if (largest != i)
	{
		std::swap(arr[i], arr[largest]);
		max_heapify(arr, largest, size_);
	}
}


vector<int> HeapSortRecursion(std::vector<int> arr)
{
	vector<int> Stack;
	for (int i = (arr.size() / 2); i >= 0; i--)
	{
		max_heapify(arr, i, arr.size());
	}
	int sz = arr.size();
	for (int i = arr.size() - 1; i > 0; i--)
	{
		std::swap(arr[0], arr[i]);
		sz--;
		max_heapify(arr, 0, sz);
	}
	return arr;
}
int main()
{

}