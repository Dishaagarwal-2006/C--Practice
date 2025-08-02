#include <iostream>
using namespace std;
int main(){
    int month; 
    cout << "ENTER THE MONTH NUMBER(1 to 12):";
    cin  >> month;

    switch(month){
          case 1:
          cout << "JANURUARY\n 31 days" << endl;
          break;
        case 3:
    cout << "MARCH\n 31 days " << endl;
    break;
    case 5:
    cout << "MAY\n 31 days" << endl;
    break;
    case 7:
    cout << "JULY\n 31 days"<< endl;
    break;
    case 8:
    cout << "AUGUST\n 31 days" << endl;
    break;
    case 10:
    cout << "OCTOBER\n 31 days" << endl;
    break;
    case 12:
    cout << "DECEMBER\n 31 days" << endl;
    break;
 cout << "31 days";
        break;

    case 4:
    cout << "APRIL\n 30 days"<<endl;
    break;
    case 6:
    cout << "JUNE \n 30 days" << endl;
    break;
    case 9:
    cout << "SEPTEMBER\n 30 days" << endl;
    break;
    case 11:
    cout << "NOVEMBER\n 30 days"<< endl;
    break;

    cout << "30 days";
        break;

    case 2:
    cout << "FEBRUARY\n28 or 29 days" <<endl;
 cout << "28 or 29 days";
        break;

    default:
        cout << "Invalid month number";
}
    }


