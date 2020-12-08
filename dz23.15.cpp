#include <iostream>
#include <cmath>
#include <queue>
using namespace std;

struct BlackBox {
	int K = 0;
	queue<int>q1;
	void pushh(int t) {
		q1.push(t);
		K++;
	}
	int  min_k() {
		int min_value = INT_MAX;
		size_t size = q1.size();
		while (size-- > 0) {
			int x = q1.front();
			q1.pop();
			q1.push(x);
			if (x < min_value)
				min_value = x;
		}
		return min_value;
	}

};
int main() {
	BlackBox r;
	r.pushh(6);
	r.pushh(5);
	cout << r.K << endl;
	cout<<r.min_k();
}