#include <iostream>
#include <set>
#include <utility>
int main() {
    using namespace std;
    unsigned N, Q;
    cin >> N >> Q;
    // フォロー関係を保持する集合
    set<pair<unsigned, unsigned>> follows;
    for (unsigned _{}; _ < Q; ++_) {
        unsigned type, A, B;
        cin >> type >> A >> B;
        if (type == 1)
            // 順序対 (A, B) を追加
            follows.emplace(A, B);
        else if (type == 2)
            // 順序対 (A, B) を削除
            follows.erase({A, B});
        else
            // 順序対 (A, B), (B, A) がどちらも含まれるか判定
            cout << (follows.count({A, B}) && follows.count({B, A}) ? "Yes" : "No") << endl;
    }
    return 0;
}