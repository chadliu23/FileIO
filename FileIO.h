#ifndef FILEIO_H
#define FILEIO_H
#include <string>
#include <vector>
#include <sstream>
#include <fstream>


class FileIO
{
public:
	
	typedef std::vector<std::string>::iterator iterator;
	void write(const std::string& filename);
	void read(const std::string& filename);
	void clear();
	iterator begin();
	iterator end();


	template<class T>
	iterator search(const T& tosearch)
	{
		std::stringstream ss;
		ss << tosearch;
		return find(m_data.begin(), m_data.end(), ss.str());
	}

	template<class T> 
	void push_back(const T& s)
	{
		std::stringstream ss;
		ss << s;
		m_data.push_back(ss.str());
	}

private:
	std::vector<std::string> m_data;
};

#endif