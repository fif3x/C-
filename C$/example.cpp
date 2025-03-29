#include <iostream>
#include <string>
#include <cstdlib>
#include "c$.h"

$ main() {
	ch$ character[] = "c$";
	s$ string1 = "c$";
	$ integer = 100;
	$_ float1 = 100.0;
	$$ double1 = 100.0;
	b$ example = true;

	wf file("example.txt");
	file << "Example text";
	file.close();
	rf anotherFile("anotherExample.txt");

	std::cout << character << "\n";
	std::cout << string1 << "\n";
	std::cout << integer << "\n";
	std::cout << float1 << "\n";
	std::cout << double1 << "\n";
	std::cout << example << "\n";

}