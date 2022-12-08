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

//Explicitly declare which exact templated class you will use in other codes.
template class SampleClass<int>;
template class SampleClass<float>;
template class SampleClass<double>;