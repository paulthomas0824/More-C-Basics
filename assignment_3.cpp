#include <iostream>
#include <vector>
using namespace std;

// vector example code 1
// define index
// Methods:
// push_back;
// pop_back;
// size;
// at();
// clear;
// capacity;
// begin;
// end;
// empty; (boolean)
// back();
// front();
 
int main() {

   // create a vector to store int
   vector<string> month; 
   vector<int> rain;
   int i;
   int v;
	month.push_back("January");
    month.push_back("Febuary");
    month.push_back("March");
    month.push_back("April");
    month.push_back("May");
    month.push_back("June");
    month.push_back("July");
    month.push_back("August");
    month.push_back("September");
    month.push_back("October");
    month.push_back("November");
    month.push_back("December");
   // display the original size of vec
   cout << "Month Vector Size = " << month.size() << endl;


   // push 5 values into the vector
   for(i = 0; i < 11; i++) 
   {
   	  cout << "Please enter in Rainfall in Inches by the month." << endl;
      cout << month[i] << " = ";
      cin >> v;
      rain.push_back(v);
   }
   
   for(i = 0; i < 12; i++) 
   {
   	  cout << "The Rain for " << month[i] << " was " << rain[i] << " Inches " << endl;
   	  
   }
    cout << "Rainfall for the whole year was = " << rain[0] + rain[1] + rain[2] + rain[3] + rain[4] + rain[5] + rain[6] + rain[7] + rain[8] + rain[9] + rain[10] + rain[11];
   

   
	
   // display extended size of vec
     // cout << "extended vector size = " << .size() << endl;

   // access 12 values from the vector
   
  
  
return(0);
}

