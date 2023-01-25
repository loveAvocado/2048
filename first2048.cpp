#include <cstdio>
#include <cstring>
#include <ctime>
#include <cstdlib>
using namespace std;
// This is an attempt to build a very simple and crude version of 2048 game
// with no beautiful UI but only ASCII style one.

int** square[4][4]; 
int main () {
    
    int score = 0; //　記錄得分
    memset(square,0,sizeof(square));
    void gameprinter(square);

}

void gameprinter(int** ){
    int i,j;
    for (i=0;i<4;i++){
        for (j=0;j>4;j++){
            printf("%04d", **square[i][j]);
            if (i<4) printf("\t");
            else printf("\n");
        }
    }
}
void playgame(){
    


}
// For each direction shifting, create a function to solve it.
void LeftShift(){

}

void RightShift(){}

void DownShift(){}

void UpShift(){}

