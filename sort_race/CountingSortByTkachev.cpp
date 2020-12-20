#include <vector>

using namespace std;

vector<int> countingSortByTkachev(vector<int> data)
{
	int max = data[0];
	for (int i = 1; i < data.size(); i++)
	{
		if (data[i] > max)
		{
			max = data[i];
		}
	}
	vector<int> count(max + 1, 0);
	for (int elem : data)
	{
		if (elem < 0) // если хоть один элемент является отрицательным, то сортировка именно этим способом невозможна
		{
			return data;
		}
		++count[elem];
	}
	size_t b = 0;
	for (size_t i = 0; i < count.size(); i++)
	{
		for (size_t j = 0; j < count[i]; j++)
		{
			data[b] = i;
			b++;
		}
	}
	return data;
}

vector<double> countingSortByTkachev(vector<double> data)
{// невыполнима для нецелых чисел
	return data;
}