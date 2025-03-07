#include <iostream>
#include <windows.h>
#include <ctime>

void createBoard(int columns,int rows);
void playerMove(char player[],int position[2]);
bool gameEnd(int position[2]);
void foodChange(char food,int foodposition[2]);


int main(){
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns,rows;

    columns= csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows= csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    
    char player[]={"O"};
    int position[2]={0,0};

    int foodposition[2]={rand()%columns,rand()%rows};

    while(true){

    }
    
    return 0;
}

void createBoard(int columns,int rows){
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
                std::cout<<" ";
            }
        }
    }

void playerMove(char player[],int position[2]){

}
bool gameEnd(int position[2]){

}
void foodChange(char food,int foodposition[2]){

}