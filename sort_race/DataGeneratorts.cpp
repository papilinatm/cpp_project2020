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
vector <int> GenerateBestDataRadixLSD(int size) {
	vector <int>data(size);
	for (int& i : data)
		i = rand() % 10;
	return data;
}
vector <int> GenerateWorstDataRadixLSD(int size) {
	vector <int>data(size);
	for (int& i : data)
		i = 1000000+rand()%8000000;
	return data;
}
vector <int> GenerateNormalDataRadixLSD(int size) {
	vector <int>data(size);
	for (int& i : data)
		i = 1000 + rand() %8000;
	return data;
}