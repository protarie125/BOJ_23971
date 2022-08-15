#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto h = int{}, w = int{}, n = int{}, m = int{};
	cin >> h >> w >> n >> m;

	auto a = h / (n + 1);
	auto ap = h % (n + 1);
	if (0 < ap) {
		a += 1;
	}

	auto b = w / (m + 1);
	auto bp = w % (m + 1);
	if (0 < bp) {
		b += 1;
	}

	cout << a * b;

	return 0;
}