#include<bits/stdc++.h>
using namespace std;

char a[10]={'0','1','2','3','4','5','6','7','8','9'};

void board()
{
    system("cls");
    cout<<"\n\n      TIC-TAC-TOE GAME\n\n";
    cout<<"  Player 1(X)---Player 2(O)\n\n";
    cout<<"          |     |    \n";
    cout<<"       "<<a[1]<<"  |  "<<a[2]<<"  |  "<<a[3]<<endl;
    cout<<"     _____|_____|_____\n";
    cout<<"          |     |     \n";
    cout<<"       "<<a[4]<<"  |  "<<a[5]<<"  |  "<<a[6]<<endl;
    cout<<"     _____|_____|_____\n";
    cout<<"          |     |     \n";
    cout<<"       "<<a[7]<<"  |  "<<a[8]<<"  |  "<<a[9]<<endl;
    cout<<"          |     |     \n\n";
}

int check()
{
    if(a[1]==a[2] && a[2]==a[3])
        return 1;
    else if(a[4]==a[5] && a[5]==a[6])
        return 1;
    else if(a[7]==a[8] && a[8]==a[9])
        return 1;
    else if(a[1]==a[4] && a[4]==a[7])
        return 1;
    else if(a[2]==a[5] && a[5]==a[8])
        return 1;
    else if(a[3]==a[6] && a[6]==a[9])
        return 1;
    else if(a[1]==a[5] && a[5]==a[9])
        return 1;
    else if(a[3]==a[5] && a[5]==a[7])
        return 1;
    else if(a[1]!='1' && a[2]!='2' && a[3]!='3' && a[4]!='4' && a[5]!='5' && a[6]!='6' && a[7]!='7' && a[8]!='8' && a[9]!='9')
        return 0;
    else
        return -1;
}

int main()
{
    int player=1,choice,i;
    do{
    board();
    player=(player%2)?1:2;
    char mark=(player==1)?'X':'O';
    cout<<"Player "<<player<<" chance, enter a number: ";
    cin>>choice;

    if(choice==1 && a[1]=='1')
        a[1]=mark;
    else if(choice==2 && a[2]=='2')
        a[2]=mark;
    else if(choice==3 && a[3]=='3')
        a[3]=mark;
    else if(choice==4 && a[4]=='4')
        a[4]=mark;
    else if(choice==5 && a[5]=='5')
        a[5]=mark;
    else if(choice==6 && a[6]=='6')
        a[6]=mark;
    else if(choice==7 && a[7]=='7')
        a[7]=mark;
    else if(choice==8 && a[8]=='8')
        a[8]=mark;
    else if(choice==9 && a[9]=='9')
        a[9]=mark;
    else{
        cout<<"\n==>Invalid move, press c to continue... ";
        player--;
        cin.ignore();
        cin.get();
    }
    i=check();
    player++;
     }while(i==-1);

    board();
    cout<<" ***************************\n\n";
    if(i==1)
    cout<<"     ==>Player "<<--player<<" win<==";
    else
    cout<<"       ==>Game draw<==";
    cout<<"\n\n ***************************";
    return 0;
}
