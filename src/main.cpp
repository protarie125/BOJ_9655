#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	cout << (0 == n % 2 ? "CY" : "SK");

	return 0;
}