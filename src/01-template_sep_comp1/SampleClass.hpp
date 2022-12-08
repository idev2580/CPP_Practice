#ifndef __SAMPLE_CLASS__
#define __SAMPLE_CLASS__

#include <iostream>

template <typename T>
class SampleClass{
	private:
	T templateVar;
	public:
	void showTemplateVar();
	void setTemplateVar(T var);
};

#endif