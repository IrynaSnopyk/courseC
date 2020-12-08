#include <iostream>
#include <cmath>
#include <queue>

using namespace std;

int main() {
	int n;
	cout << "Input count of people: ";
	cin >> n;
	int t;
	queue<int>q1;
	for (int i = 0; i < n; i++) {
		cout << "time "<<i+1<<" person: ";
		cin >> t;
		q1.push(t);
	}

	vector <int>c;
	int time = 0;
	while (!q1.empty()) {
		t = q1.front();
		q1.pop();
		time += t;
		c.push_back(time);
	}
	cout << endl;
	for (vector<int>::iterator it = c.begin(); it != c.end(); ++it) {
		cout << *it << ", ";
	}
}