#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int comptime()
{
	time_t t = time(nullptr);
	// cout << "localtime: " << put_time(localtime(&t), "%c %Z") << endl;
	return 0;
}