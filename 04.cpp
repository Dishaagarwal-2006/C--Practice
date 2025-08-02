#include <iostream> 
using namespace std;
int main()
{
int day;
cout << "ENTER THE DAY (1 TO 7 ):"  << endl;
cin >> day;

   switch(day){
   case 1: 
   cout << "MONDAY" << endl;
   break;
   
   case 2: 
   cout << "TUESDAY "  << endl;
   break;
   case 3: 
   cout <<"WEDNESDAY"<< endl;
   break;
   case 4: 
   cout <<"THRUSDAY"<< endl;
   break;
   case 5: 
   cout << "FRIDAY" << endl;
   break;
   case 6: 
   cout <<"SATURDAY"  << endl;
   break;
   case 7: 
   cout << "SUNDAY" << endl;
   break;

   
    default:
     cout <<  ("INVALID DAY!");
   }
   return 0 ;
}