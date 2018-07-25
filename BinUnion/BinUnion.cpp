// BinUnion.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define BUFFER_SIZE 1024

void merge_file(const char* file_in_name1, const char* file_in_name2, const char* file_out_name, long add_addr);

int main()
{
	//char *file1 = new char[1000];
	//char *file2 = new char[1000];
	//long addr = 0;
	//cout << "输入文件1:" << endl;
	//cin >> file1;
	//cout << "输入文件2:" << endl;
	//cin >> file2;
	//cout << "输入偏移量:" << endl;
	//cin >> hex >> addr;
	//merge_file(file1, file2, "merge.bin", addr);
	unsigned char pos[200];
	for (size_t i = 0; i < 200; i++)
	{
		pos[i] = (unsigned char) i;
	}

	ofstream f("binary.bin", ios::binary);
	if (f) {
		f.write((char *)pos, 200 * sizeof(unsigned char));
		f.close();
	}

	return 0;

}

void merge_file(const char* file_in_name1, const char* file_in_name2, const char* file_out_name, long add_addr)
{
	ifstream f1(file_in_name1, ios::binary | ios::in);
	f1.seekg(0, ios::end);
	streampos sp = f1.tellg();
	cout << "file size:" << endl << sp << endl;

	

}



