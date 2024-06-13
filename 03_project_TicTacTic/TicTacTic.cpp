#include<iostream>
#include<map>
using namespace std;

void print( char game_board[3][3] ){
    int size = sizeof(game_board)/sizeof(char);
    for( int i=0 ; i<3 ; i++ ){
        cout<<"-------"<<endl;
        for( int j=0 ; j<3 ; j++ ){
            cout<<"|"<<game_board[i][j];
        }
        cout<<"|"<<endl;
    }
    cout<<"-------";
}

void check( char game_board[3][3] , int &game , char name){
    if( game_board[0][0]==game_board[0][1]==game_board[0][2] ||
        game_board[1][0]==game_board[1][1]==game_board[1][2] ||
        game_board[2][0]==game_board[2][1]==game_board[2][2] ||
        game_board[0][0]==game_board[1][0]==game_board[2][0] ||
        game_board[0][1]==game_board[1][1]==game_board[2][1] ||
        game_board[0][2]==game_board[1][2]==game_board[2][2] ||
        game_board[0][0]==game_board[1][1]==game_board[2][2] ||
        game_board[2][0]==game_board[1][1]==game_board[0][2] )
        {
            cout<<"Status: "<<name<<" Won The Game"<<endl;
            game = 1;
        }
    else if(game_board[0][0]!='-' ||
            game_board[0][1]!='-' ||
            game_board[0][2]!='-' ||
            game_board[1][0]!='-' ||
            game_board[1][1]!='-' ||
            game_board[1][2]!='-' ||
            game_board[2][0]!='-' ||
            game_board[2][1]!='-' ||
            game_board[2][2]!='-' )
            {
            cout<<"Status: Draw"<<endl;
            game = 1;
    }else{
        cout<<"Status: Ongoing"
    }
}

int main(){

    char game_board[3][3]={{'_','_','_'},{'_','_','_'},{'_','_','_'}};
    int position;
    int game=0;
    while( game!=1 ){
        cout<<"Player A input: "<<endl;
        cin>>position;
        game_board [position/3][position%3]='x';
        print(game_board);
        check( game_board , game , 'A' );

        cout<<"Player B input: "<<endl;
        cin>>position;
        game_board [position/3][position%3]='o';
        print(game_board);
        check( game_board , game , 'B');

    }

    return 0;
}