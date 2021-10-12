#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	vector<int> time;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		time.push_back(a);
	}

	sort(time.begin(), time.end());

	int result = 0;
	for (int i = 0; i < N; i++) {
		result += time[i] * (N - i);
	}

	cout << result;

}