#include "FileIO.h"


FileIO::iterator FileIO::begin()
{
	return m_data.begin();
}
FileIO::iterator FileIO::end()
{
	return m_data.end();
}

void FileIO::clear()
{
	m_data.clear();
}
		
void FileIO::write(const std::string& filename)
{
	std::ofstream myfile (filename);
	if (myfile.is_open())
	{
	for(std::vector<std::string>::iterator it = m_data.begin();
		it != m_data.end(); ++it)
	{
		myfile << *it <<std::endl;
	}
	myfile.close();
	 }
}
void FileIO::read(const std::string& filename)
{
	m_data.clear();
	std::ifstream myfile (filename);
	std::string line;
	if (myfile.is_open())
	{
	while ( getline (myfile,line) )
	{
			m_data.push_back(line);
	}
	myfile.close();
	}
}