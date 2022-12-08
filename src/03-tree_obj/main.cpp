#include <iostream>
#include "tree.hpp"

template <typename T>
void trav_f(std::string key, T val){
	std::cout << "Key : " << key << " / Val : " << val << std::endl;
	return;
}

using namespace prc;

void test_int(){
	auto t = new Tree<int>("Root", 1);
	auto lv1_0 = t->addChild("1Lv[0]", 2);
	auto lv1_1 = t->addChild("1Lv[1]", 3);
	auto lv1_2 = t->addChild("1Lv[2]", 4);
	auto lv2_0 = t->addChild("2Lv[0]", 5);
	t->traverse(trav_f<int>);
	t->delete_trav();
}

void test_double(){
	auto t = new Tree<double>("Root", 1.0);
	auto lv1_0 = t->addChild("1Lv[0]", 2.0);
	auto lv1_1 = t->addChild("1Lv[1]", 3.0);
	auto lv1_2 = t->addChild("1Lv[2]", 4.0);
	auto lv2_0 = t->addChild("2Lv[0]", 5.0);
	t->traverse(trav_f<double>);
	t->delete_trav();
}

void test_string(){
	auto t = new Tree<std::string>("Root", "1.0");
	auto lv1_0 = t->addChild("1Lv[0]", "2.0");
	auto lv1_1 = t->addChild("1Lv[1]", "3.0");
	auto lv1_2 = t->addChild("1Lv[2]", "4.0");
	auto lv2_0 = t->addChild("2Lv[0]", "5.0");
	t->traverse(trav_f<std::string>);
	t->delete_trav();
}

int main(){
	std::cout << "Test Int Templated Instance." << std::endl;
	test_int();
	std::cout << std::endl;
	
	std::cout << "Test Double Templated Instance." << std::endl;
	test_double();
	std::cout << std::endl;
	
	std::cout << "Test String Templated Instance." << std::endl;
	test_string();
	std::cout << std::endl;
	return 0;
}