#ifndef __TREE__
#define __TREE__

#include <string>
#include <vector>

namespace prc{
	template <typename T>
	class Tree{
		typedef  void (*tFunc)(std::string key, T obj);
		
		private:
			//Other nodes.
			Tree* parent;
			std::vector<Tree*> childs;
			
			//Itself.
			std::string key;
			T obj;
			
			//private functions.
			void attachChild(Tree* tptr);
		public:
			Tree(std::string ky, T ob);
			Tree<T>* addChild(std::string key, T obj);
			int traverse(tFunc f);
			void delete_trav();
	};
}
#endif