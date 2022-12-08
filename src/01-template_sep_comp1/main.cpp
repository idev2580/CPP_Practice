#include <iostream>
#include "SampleClass.hpp"

int main(int argc, char* argv[]) {
	SampleClass<int> obj;
	obj.setTemplateVar(3);
	obj.showTemplateVar();
	return 0;
}