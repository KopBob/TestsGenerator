

#ifndef _GENERATOR_H
#define _GENERATOR_H

#include <fstream>

class Generator
{
private:
	unsigned int _func_num; // Number of random functions
	std::ofstream _test_file;

	void _generateHeader();
	void _generateFunctionsBody();
	void _generateMain();

public:
	Generator(int,const char*);
	~Generator();

	// Generate test file
	void generate();
};



#endif