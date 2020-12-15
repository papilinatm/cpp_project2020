#include <vector>

using namespace std;

vector<int> CountingSortByTkachev(vector<int> array)
{
	int max = array[0];
	for (size_t i = 1; i < array.size(); i++)
	{
		max = (array[i] > max) ? array[i] : max;
	}
	vector<int> c;
	c.resize(max + 1);
	for (int elem : array)
	{
		++c[elem];
	}
	int b = 0;
	for (size_t i = 0; i < c.size(); i++)
	{
		for (size_t j = 0; j < c[i]; j++)
		{
			array[b] = i;
			b++;
		}
	}
	return array;
}