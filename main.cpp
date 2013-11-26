#include <iostream>
#include "FileIO.h"

using namespace std;
int main()
{
	FileIO io;
	io.push_back(10);
	io.push_back(20);
	io.push_back(30);
	io.write("hello.txt");
	
	io.read("hello.txt");
	
	FileIO::iterator it = io.search(10);
	if(it != io.end())
	{
		cout <<"search result: "<<*it <<endl;
	}



	return 0;
}
	