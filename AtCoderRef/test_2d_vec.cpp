#include <queue>
#include <map>
#include <set>
#include <iostream>     // cout
#include <ctime>        // time
#include <cstdlib>      // srand,rand
using namespace std;
int main() {
	int n = 10;
	int a, b;
	vector<auto> adr_vec(n);
	map<int, vector<int>> graph;
	for (int i = 0; i < n; i++) {
		a = rand() % 10;
		b = rand() % 10;
		graph[a].push_back(b);
		graph[b].push_back(a);

		for(int j = 0;j < n; j++){
			adr_vec.at(j) = (int)(&graph.at(j));//ここでエラー
		}		
	}
	cout << &graph.at(0) << endl;
}