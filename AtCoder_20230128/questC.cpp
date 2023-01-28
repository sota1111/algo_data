#include<bits/stdc++.h>
using namespace std;
int main() {
    int N, M, i, j,judge=true,find;
    cin >> N >> M;
    vector<vector<int>> V(3, vector<int>(M));
    std::vector<int> G(N); 
    for (int i = 0; i < M; i++){
        int u, v;
        cin >> u >> v;
        V.at(0).at(i) = u;
        V.at(1).at(i) = v;
        V.at(2).at(i) = false;
    }
    for (i=0;i<N-1;i++){
        if((i==0)&&(M>0)){
            G.at(0) = V.at(0).at(0);
            G.at(1) = V.at(1).at(0);
            V.at(2).at(0) = true;
        }else{
            find = false;
            for(j=0;j<M;j++){
                if( V.at(2).at(j) == false ){
                    if( G.at(i) == V.at(0).at(j) ){
                        G.at(i+1) = V.at(1).at(j);
                        V.at(2).at(j) = true;
                        find = true;
                    }else if( G.at(i) == V.at(1).at(j) ){
                        G.at(i+1) = V.at(0).at(j);
                        V.at(2).at(j) = true;
                        find = true;
                    }
                }
            }
            if(find==false){
                judge = false;
            }
        }
    }
    if(judge == true){
        cout << "Yes";
    }else{
        cout << "No";
    }
    
}