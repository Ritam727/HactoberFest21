#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int SnakeWaterGun(char you, char comp){
    //return 0 for draw
    //return 1 for win
    //return -1 for loss
    if(you==comp){
        return 0;
    }
    if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g'&& comp=='s'){
        return 1;
    }
    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w'&& comp=='s'){
        return -11;
    }
    if(you=='w' && comp=='g'){
        return 1;
    }
    else if(you=='w'&& comp=='g'){
        return 1;
    }
}
int main(){
    char you, comp;
    int number;
    srand(time(0));
    number  = rand()%100+1;
    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp = 'g';
    }
    else{
        comp = 'w';
    }
    cout<<"Enter 's' for snake, 'w' for water, 'g' for gun\n";
    cin>>you;
    int result = SnakeWaterGun(you, comp);
    printf("You enter %c and Computer enter %c\n",you,comp);
    if(result==0){
        cout<<"Draw\n";
    }
    else if(result==1){
        cout<<"You Win\n";
    }
    else{
       cout<<"You lose\n";
    }
    return 0; 
}
