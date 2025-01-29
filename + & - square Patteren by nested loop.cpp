#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter number to Print its patter of + and - : ";
	cin >> n;
	//outer loop;
	for (int i = 0;i <= n;i++) {
		//inner loop;
		for (int j = 1;j <= n;j++) {
			// to print + and - ;
			cout << " + " << " - ";

		}
		cout << endl;
	}

	system("pause");

    return 0;
}