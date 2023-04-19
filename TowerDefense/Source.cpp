#include "Manager.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Creating manager" << endl;
	Manager* mgr = Manager::GetInstance();

	if (!mgr)
	cout << "Manager error" << endl;

	cout << "Destroying manager" << endl;
	Manager::Destroy();

	cout << "Successful finish" << endl;
	return 0;
}