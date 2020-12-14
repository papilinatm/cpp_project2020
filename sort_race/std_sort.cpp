#include <vector>
#include <algorithm>

using namespace std;

vector<int> std_sort(vector<int> data)
{
	sort(data.begin(), data.end());
	return data;
}
vector<double> std_sort_double(vector<double> data)
{
	//return unsorted vector if data doesn't match your method
	sort(data.begin(), data.end());
	return data;
}