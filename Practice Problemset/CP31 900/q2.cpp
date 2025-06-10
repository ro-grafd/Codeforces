#include <stdio.h>
#include <limits.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int N;
        long long K;
        scanf("%d %lld", &N, &K);
        int A[N], B[N];
        for (int i = 0; i < N; i++){
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < N; i++){
            scanf("%d", &B[i]);
        }
        
        long long base = 0; // sum of minimal moves if direct route chosen for every dial
        int minFlip = INT_MAX; // minimum extra cost (flip cost) among all dials
        
        for (int i = 0; i < N; i++){
            // Map digits to 0..8 so that arithmetic is mod9.
            int a = A[i], b = B[i];
            int aa = a - 1, bb = b - 1;
            int diff = (bb - aa + 9) % 9;  // difference mod9, in 0..8
            
            int r; // minimal cost for dial i if not flipped
            int delta; // extra cost if we choose the alternate route
            if(diff == 0){
                r = 0;         // already at target
                delta = 9;     // to flip, we must do 9 moves (which is odd and gets back to same digit)
            } else {
                // Two possibilities: doing d moves in one direction or (9-d) moves in the other.
                int up = diff;
                int down = 9 - diff;
                if(up <= down){
                    r = up;  // direct (cheaper) option
                    delta = down - up; // extra cost to flip = (9 - r) - r = 9 - 2*r
                } else {
                    r = down;
                    delta = up - down; // = 9 - 2*r  (since up+down=9)
                }
            }
            base += r;
            if(delta < minFlip) minFlip = delta;
        }
        
        long long R = K - base; // extra moves available over the minimal assignment
        
        // If not enough moves, then answer is NO.
        if(R < 0){
            printf("NO\n");
            continue;
        }
        // If extra moves is even, we can always add them in pairs.
        if(R % 2 == 0){
            printf("YES\n");
        } else {
            // If R is odd, we must flip at least one dial.
            // Flipping a dial adds an odd cost. To use exactly R moves,
            // at least one dial must have a flip cost <= R.
            if(minFlip <= R)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}