#include "entry.h"
#include <iostream>

using namespace std;

int main()
{
    // your code here
	Entry a;
	a.requestEntryFromUser();
	cout<<a.toString();
	return 0;
}
