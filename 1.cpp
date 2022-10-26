#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	int mask = 0x01;
	int num;
	int pos;
	cout << "Enter number: ";
	cin >> num;
	cout << "Number: " << bitset<32>(num) << "\n";
	cout << "Enter position: ";
	cin >> pos;
	mask = mask << pos;
	cout << "Mask: " << bitset<32>(mask) << "\n";
	num = num | mask;
	cout << "Result: " << bitset<32>(num) << "\n";
	cout << "Result in 10ss: " << num << endl;
}