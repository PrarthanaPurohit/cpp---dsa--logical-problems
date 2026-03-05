# include <iostream> 
using namespace std;
int main(){
    char grade;
    cin>> grade;
    char n = 'good';

    switch(grade){
        case 'A':
        cout<< "hi";
        break;
        case 'B':
        cout<< "bye";
        break;
        default:
        cout<< "not available";
    }
    return 0;

}

