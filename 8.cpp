#include <iostream>
#include <string>
using namespace std;
string operator *(int n, string repeat){
	string result = "";
	while (n--) result += repeat;
	return result;
}
string pattern(int left, int len){
	string BLANK = "  ", MARK = "* ";
	if (len == 0) return "";
	return pattern(left, len / 2) + left * BLANK + len * MARK + '\n' + pattern(left + len / 2, len / 2);
}
int main()
{
	int n;
	cout << "Enter n (a power of 2): ";   cin >> n;
	cout << pattern(0, n);
}
