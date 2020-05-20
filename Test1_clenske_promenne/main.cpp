#include <stdio.h>

class Bod
{
public:
	int x;
	int y;
};

int main()
{
	Bod b1;
	b1.x = 2;
	b1.y = 3;

	printf("Bod b1 ma souradnice x: %d y: %d", b1.x, b1.y);

	Bod b2 = b1;
}