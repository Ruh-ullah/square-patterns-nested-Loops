#include <iostream>
using namespace std;
int main() {
  int n;
cout << "Enter you number to print square patteren: ";
cin >> n;
//outer loop
for (int i = 1;i <= n;i++) {
	//inner loop
	for (int j = 1;j <= n;j++) {
		//work will be print
		cout << " *";
	}
	cout << endl;
}

    return 0;
}