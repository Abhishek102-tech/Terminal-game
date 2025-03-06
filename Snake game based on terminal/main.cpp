#include <iostream>
#include <windows.h>

void playerMove(char player[],int position[2]);
bool gameEnd(int position[2]);
void foodChange(char food,int foodposition[2]);


int main(){
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns,rows;

    columns= csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows= csbi.srWindow.Bottom - csbi.srWindow.Top + 1;  

    while(true){

    }
    
    return 0;
}

void playerMove(char player[],int position[2]){

}
bool gameEnd(int position[2]){

}
void foodChange(char food,int foodposition[2]){
    
}