#include <vector>
#include <algorithm>

using namespace std;

vector<int> std_sort_for_integers(vector<int> data)
{
	sort(data.begin(), data.end());
	return data;
}


vector<double> std_sort_for_doubles(vector<double> data)
{
	sort(data.begin(), data.end());
	return data;
}