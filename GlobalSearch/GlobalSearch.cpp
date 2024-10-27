// Programm Global Search
// Describes work with Global variable

#include <iostream>
int Global = 10; // Global variable

void access_global();
void hide_global();
void change_global();

int main()
{
	std::cout << "In main() Global variable is: " << Global << "\n\n";
	access_global();
	hide_global();
	
	std::cout << "In main() Global variable is: " << Global << "\n\n";
	change_global();
	
	std::cout << "In main() Global variable is: " << Global << "\n\n";
	return 0;
}



void access_global()
{
	std::cout << "In access_global() Global variable is : " << Global << "\n\n";
}
void hide_global()
{
	int Global = 0; // hide Global variable "Global"
	std::cout << "In hide_global() Global variable is: " << Global << "\n\n";
}
void change_global()
{
	int Global = -10;
	std::cout << "In change_global() Global variable is: " << Global << "\n\n";
}