#include <vector>

using namespace std;

vector<int> Quick_Sort(vector<int>& data, int low = 0, int high = -1)
{
	if (high == -1)
		high = data.size() - 1;
	int first = low;
	int last = high;
	int mid = data[high];
	do
	{
		while (data[first] < mid) ++first;
		while (data[last] > mid) --last;
		if (first <= last)
		{
			swap(data[first], data[last]);
			++first;
			--last;
		}
	} while (first <= last);
	if (low < last) Quick_Sort(data, low, last);
	if (first < high) Quick_Sort(data, first, high);
	return data;
}