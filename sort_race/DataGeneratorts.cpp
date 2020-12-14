#include <vector>
#include "DataGenerators.h"

using namespace std;

vector<int> MyGenerate(int size) {
	vector<int> data(size);
	for (int& i : data) {
		i = 156446465141;
	}
	return data;
}
