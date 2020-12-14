#include <vector>
#include <chrono>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

using ParticipantInt = std::vector<int>(*)(std::vector<int>);

void RunInt(string method_name, ParticipantInt p, vector<int> data){
	auto start = chrono::system_clock::now();
	vector<int> res = p(data);
	auto stop = chrono::system_clock::now();
	auto time = chrono::duration_cast<chrono::microseconds>(stop - start).count();

	cout << method_name << "\t"
		<< data.size() << "\t"
		<< (is_sorted(res.begin(), res.end()) ? to_string(time) + "\tmcs" : "failed") << endl;
}

vector<int> GenerateIntData(int size, int max_value = INT_MAX) {
	//generate random data or read data from your file
	vector<int> data(size);
	for (int& d : data)
		d = rand() % max_value;
	return data;
}

using ParticipantDouble = std::vector<double>(*)(std::vector<double>);

void RunDouble(string method_name, ParticipantDouble p, vector<double> data) {
	auto start = chrono::system_clock::now();
	vector<double> res = p(data);
	auto stop = chrono::system_clock::now();
	auto time = chrono::duration_cast<chrono::microseconds>(stop - start).count();

	cout << method_name << "\t"
		<< data.size() << "\t"
		<< (is_sorted(res.begin(), res.end()) ? to_string(time) + "\tmcs" : "failed") << endl;
}

vector<double> GenerateDoubleData(int size, int max_value = INT_MAX) {
	vector<double> data(size);
	for (double& d : data)
		d = rand() / (double)max_value;
	return data;
}

