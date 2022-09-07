#include <iostream>

using namespace std;

int main(){
    // int king, queen, rook, bishop, knight, pawn;
    // int king_ans = 1;
    // int queen_ans = 1;
    // int rook_ans = 2;
    // int bishop_ans = 2;
    // int knight_ans = 2;
    // int pawn_ans = 8;

    // cin >> king >> queen >> rook >> bishop >> knight >> pawn;
    // cout << king_ans - king << queen_ans - queen << rook_ans - rook 
    //     << bishop_ans - bishop << knight_ans - knight << pawn_ans - pawn;

    // return 0;

    int user_input[6];
    int ans[6] = { 1, 1, 2, 2, 2, 8};

    for (int i = 0; i < 6; i++)
        cin >> user_input[i];

    for (int i = 0; i < 6; i++)
        cout << ans[i] - user_input[i] << " ";
}