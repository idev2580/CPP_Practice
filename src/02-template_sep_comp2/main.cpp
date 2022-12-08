#include <iostream>
#include "SampleClass.hpp"

int main(int argc, char* argv[]) {
	SampleClass<int> iobj;
	iobj.setTemplateVar(3);
	iobj.showTemplateVar();
	SampleClass<float> fobj;
	SampleClass<double> dobj;
	fobj.showTemplateVar();
	dobj.showTemplateVar();
	return 0;
}