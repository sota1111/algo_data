/*10^9階建てのビルがあり、N 本のはしごがかかっています。
ビルの 1 階にいる高橋君ははしごを繰り返し使って（0 回でもよい）できるだけ高い階へ上りたいと考えています。
はしごには 1 から N までの番号がついており、はしご i は Ai階と Bi階を結んでいます。
はしご i を利用すると Ai階から Bi階へ、または Bi階から Ai階へ双方向に移動することができますが、それ以外の階の間の移動は行うことはできません。
また、高橋君は同じ階での移動は自由に行うことができますが、はしご以外の方法で他の階へ移動することはできません。
高橋君は最高で何階へ上ることができますか？*/

#include <iostream>
#include <queue>
#include <map>
#include <set>
using namespace std;
int main() {
	int n;
	cin >> n;
	map<int, vector<int>> graph;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	queue<int> que;
	que.push(1);
	set<int> S;
	S.insert(1);
	while (!que.empty()) {
		int v = que.front(); que.pop();
		for (int i : graph[v]) {
			if (!S.count(i)) {
				que.push(i);
				S.insert(i);
			}
		}
	}
	cout << *S.rbegin() << '\n';
}