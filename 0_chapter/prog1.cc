#include <iostream>

void read() { std::cout << "read()\n"; }
void sort() { std::cout << "sort()\n"; }
void compact() { std::cout << "compact()\n"; }
void write() { std::cout << "write()\n"; }

int main(void)
{
	read();
	sort();
	compact();
	write();
	return 0;
}
