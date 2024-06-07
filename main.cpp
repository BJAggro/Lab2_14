#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
    vec.push_back(cnt+1);
    if (cnt+1 > N) {
	vec.pop_back();
	return;
    }
    else {
	if (vec.size() == M) {
	    for (int a : vec) {
	        cout << a << " ";
	    }
	    cout << endl;
	    vec.pop_back();
	    return;
	}
    }
    for (int j = cnt + 1; j <= N-1; j++) {
	    func(j);
    }
    vec.pop_back();
    if (cnt < N && vec.size() == 0) {
	    func(cnt + 1);
    }






}

int main() {
   cin >> N >> M;
   func(0);
}
