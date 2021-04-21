#include<iostream>
#include "../string/Solution.hpp"
using namespace std;

class Void {
public :
	Void() {};
	virtual ~Void() {};
};
int _main() {
	const int p = 10;
	const void* vp = &p;
	const void* pp = &p;
	Void v =  Void();
	string a = "";
	cout << reverseWords(a)<< endl;
	return 0;
}
