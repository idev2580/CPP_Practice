#include "SampleClass.hpp"

template <typename T>
void SampleClass<T>::showTemplateVar(){
	std::cout << this->templateVar << std::endl;
	return;
}

template <typename T>
void SampleClass<T>::setTemplateVar(T var){
	this->templateVar = var;
	return;
}

//template class SampleClass<int>
void dummy(){
	SampleClass<int> __UNUSED_VAR_FOR_TEMP_COMP; 
	__UNUSED_VAR_FOR_TEMP_COMP.setTemplateVar(10);
	__UNUSED_VAR_FOR_TEMP_COMP.showTemplateVar();
}