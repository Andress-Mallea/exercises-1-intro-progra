
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
        if (s1 < s2 && s1 < s3)
        {
            cout << s1;
        }
        else if (s2 < s1 && s2 < s3)
        {
            cout << s2;
        }
        else
        {
            cout << s3;
        }
    }

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
  double R = B*B - 4*A*C;
        double rm = (-B + sqrt(R))/(2*A);
        double rn = (-B - sqrt(R))/(2*A);
       if( B*B < 4*A*C || 2*A == 0){
            cout << "";

       }
       else{
        if (R < 0)
        {
            cout << "";
        }
        else if(rm == rn)
        {
            cout << rn << endl;
        }
        else
        {
            cout <<rm << " " <<rn<< endl;
        }
}
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
  if (b == 0){
      cout << "Impossible" << endl;
  }
  else {
      cout << a/b << endl;
  }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
   if(a < b){
      if (n < a && n < b ){
          cout << n << endl;
      }
      else{ 
      if(n > a && n < b)
      {
         cout << n-(n*x/100) << endl;
      }
      else
      {
         cout << n-(n*y/100) << endl;
      }
      }
  }
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  if (character >= 'a' && character <= 'z' )
  {
      cout << "lower-case alphabet" << endl;
  }
  else if ( character >= 'A' && character <= 'Z')
  {
      cout << "upper-case alphabet" << endl;
  }
  else if ( character < 'A')
  {
      cout << "not an alphabet" << endl;
  }
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
   switch(number)
  {
      case 1: cout << "Monday" << endl; break;
      case 2: cout << "Tuesday" << endl; break;
      case 3: cout << "Wednsday" << endl; break;
      case 4: cout << "Thursday" << endl; break;
      case 5: cout << "Friday" << endl; break;
      case 6: cout << "Saturday" << endl; break;
      case 7: cout << "Sunday" << endl; break;
      default: cout << "Invalid input" << endl; break;
  }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  if (r < 0)
  {
      cout << "Error: Radius cannot be negative." << endl;
  }
  else
  {
      cout << 4*3.14*r*r << endl;
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
  if (seconds < 0)
  {
      cout << "Error: Input seconds cannot be negative." << endl;
  }
  else
  {
      long int H = seconds / 3600;
      seconds %= 60*60;
      long int min = seconds/60;
      seconds %= 60;
      cout << "0" << H << ":0" << min << ":" << seconds << endl;
  }
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}
