#include <vector>

using namespace std;

vector<int> TimSortByTkachev(vector<int> data)
{
	//----------------------------------------
	int minrun = 0;
	if (data.size() < 64)
	{
		minrun = data.size();
	}
	else
	{
		int n = data.size();
		int r = 0;
		while (n > 64)
		{
			n >>= 1; // побитовый сдвиг n на один
		}
		r |= n & 1;// в r записывается результат побитного ИЛИ между прошлым значением r 
			//и побитного И для оставшихся битов n и 1 (если в битах есть 1, то правда)
		minrun = n + r;
	}
	//----------------------------------------
	int num = data.size() / minrun;
	for (int i = 0; i < num; i++)
	{
		for (int j = (i * minrun) + 1; j < ((i + 1) * minrun); j++)
		{
			int temp = data[j];
			int k = j - 1;
			while (k >= (i * minrun) && data[k] > temp)
			{
				data[k + 1] = data[k];
				--k;
			}
			data[k + 1] = temp;
		}
	}
	for (int i = data.size() - (data.size() % minrun); i < data.size(); i++)
	{
		int temp = data[i];
		int j = i - 1;
		while (j >= data.size() % minrun && data[j] > temp)
		{
			data[j + 1] = data[j];
			--j;
		}
		data[j + 1] = temp;
	}
	//-----------------------------------------------------------
	int LeftRunIt;
	int RightRunIt;
	int MergeIterator;
	int LeftBorder;
	int MidBorder;
	int RightBorder;
	vector<int> temporary;
	for (int BlockSize = minrun; BlockSize < data.size(); BlockSize *= 2)
	{
		for (int StartRun = 0; StartRun < data.size() - BlockSize; StartRun += 2 * BlockSize)
		{
			temporary.clear();
			LeftRunIt = 0;
			RightRunIt = 0;
			LeftBorder = StartRun;
			MidBorder = StartRun + BlockSize;
			RightBorder = StartRun + 2 * BlockSize;
			if (RightBorder >= data.size())
			{
				RightBorder = data.size();
			}
			temporary.reserve(RightBorder - LeftBorder);
			while (LeftBorder + LeftRunIt < MidBorder && MidBorder + RightRunIt < RightBorder)
			{
				if (data[LeftBorder + LeftRunIt] < data[MidBorder + RightRunIt])
				{
					temporary.push_back(data[LeftBorder + LeftRunIt++]);
				}
				else
				{
					temporary.push_back(data[MidBorder + RightRunIt++]);
				}
			}
			while (LeftBorder + LeftRunIt < MidBorder)
			{
				temporary.push_back(data[LeftBorder + LeftRunIt++]);
			}
			while (MidBorder + RightRunIt < RightBorder)
			{
				temporary.push_back(data[MidBorder + RightRunIt++]);
			}

			for (int MergeIterator = 0; MergeIterator < LeftRunIt + RightRunIt; MergeIterator++)
			{
				data[LeftBorder + MergeIterator] = temporary[MergeIterator];
			}
		}
	}
	return data;
}
