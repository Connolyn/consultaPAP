#include<cstdio>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
 
struct Contestant {
    bool solved[10];
    int attempt[10];
    int penalty, count;
};
 
// Mapping contestant to Contestant object
map<int, Contestant> Contest;
 
// To keep track of which participant have solved the problem
vector< int > Index;
 
bool comp(int A, int B) {
    if (Contest[A].count != Contest[B].count)
        return (Contest[A].count > Contest[B].count);
    if (Contest[A].penalty != Contest[B].penalty)
        return (Contest[A].penalty < Contest[B].penalty);
    return (A < B);
}
 
int main() {
    int T; scanf("%d\n\n", &T);
    while(T--){
        Contest.clear();
        Index.clear();
        int A, B, C;
        char D;
        while(scanf("%d %d %d %c\n", &A, &B, &C, &D)==4){
            // Check if the given element exists in the map
            // If not then create a new Contestant object
            if (Contest.find(A) == Contest.end()) {
                Contestant Con;
                memset(Con.solved, false, sizeof Con.solved);
                memset(Con.attempt, 0, sizeof Con.attempt);
                Con.penalty = 0;
                Con.count = 0;
                Index.push_back(A);
                Contest[A] = Con;
            }
            if (D == 'C' || D == 'I') {
                if (Contest[A].solved[B]) continue;
                 
                if (D == 'C') {
                    Contest[A].solved[B] = true;
                    Contest[A].penalty += (20 * Contest[A].attempt[B] + C);
                    Contest[A].count += 1;
                }
                else {
                    Contest[A].attempt[B] += 1;
                }
            }
        }
        sort(Index.begin(), Index.end(), comp);
        for (int i = 0; i < Index.size(); i++) {
            printf("%d %d %d\n", Index[i],
                    Contest[Index[i]].count, Contest[Index[i]].penalty);
        }
        if (T) printf("\n");
    }
    return 0;
}