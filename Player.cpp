#include <iostream>
using namespace std;
class Player{
    public:
    string name;
    int matches;
    int runs;
    float avg;
    float average(){
        if(matches>0){
         avg=runs/matches;
    }
    return avg;
    }
};
int main()
{ 
    Player p;
    cout<<"Enter the name of the player:";
    cin>>p.name;
    cout<<"Enter the number of matches played:";
    cin>>p.matches;
    cout<<"Enter the number of runs scored:";
    cin>>p.runs;
   float average= p.average();
   cout<<"Batting Average:"<<average;
    return 0;
}
