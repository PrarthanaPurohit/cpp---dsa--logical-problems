#include <iostream>
using namespace std;
class TeamLead{

    public:
    int teamSize;

    //ctor
    TeamLead(int size): teamSize(size){}
};
int main(){

    TeamLead t1(10);
    return 0;
}