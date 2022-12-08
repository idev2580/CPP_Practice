#include "tree.hpp"

namespace prc{
	template <typename T>
	void Tree<T>::attachChild(Tree* tptr){
		this->childs.push_back(tptr);
		return;
	}
	
	template <typename T>
	Tree<T>* Tree<T>::addChild(std::string key, T obj){
		Tree* nTree = new Tree(key, obj);
		this->attachChild(nTree);
		return nTree;
	}
	
	template <typename T>
	Tree<T>::Tree(std::string ky, T ob) : key(ky), obj(ob){
	}
	
	template <typename T>
	int Tree<T>::traverse(tFunc f){
		f(this->key, this->obj);
		for(auto it = this->childs.begin(); it != this->childs.end(); it++){
			(*it)->traverse(f);
		}
		return 0;
	}
	template <typename T>
	void Tree<T>::delete_trav(){
		for(auto it = this->childs.begin(); it != this->childs.end(); it++){
			(*it)->delete_trav();
		}
		delete this;
	}
	
	template class Tree<int>;
	template class Tree<std::string>;
	template class Tree<double>;
}