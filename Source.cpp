#include <iostream>
using namespace std;
int main()
{
	int name;
	cout << "your marks --- ";
	cin >> name;
	while (name < 6 ){
		if (name < 3) {
			break;
		}cout << "your mark --- ";
		cin >> name;
		

	} 
	

	return 0;
}