#pragma once
#include <vector>
#include <utility>
namespace kdn
{
	class Rectangle
	{
		std::vector<std::pair<int, int>> testlist = { {100,0}, {100,100}, {0,100}, {0,0}, {100,0} };
	public:
		Rectangle() {
			/*::vector<std::pair<int, int>> _pointlist
			std::vector<std::pair<int,int>> pointlist = _pointlist;*/
		}
		void PrintTest() {
			int x = 20;
			printf("x is equal to %d\n", testlist);
		}
	};
}