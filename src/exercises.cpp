
#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
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
        if (A == 0)
       {
        if (B == 0)
        {
            cout << "";
        }
        else
        {
        cout << -C/B << endl;
        }
       }
       else
       {
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
      cout << setfill('0') << setw(2) << H << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << seconds << endl;
  }
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  string S1, S2, S3, S4, S5;
  S1 = s1[0];
  S2 = s2[0];
  S3 = s3[0];
  S4 = s4[0];
  S5 = s5[0];
  cout << S1 + S2 + S3 + S4 + S5 << endl;
  if (S1 == S5)
  {
      return "Hemos encontrado algo!";
  }
  else
  {
      return "Aun sin suerte";
  }
}

int exercise_10(int a, int b) {
if (a < 0 || b < 0)
  {
      return  0;
  }
  else 
  {
      int S = a + b;
      int s = S;
      int Ss = 0;
      while (s > 0)
      {
          s = s/10;
          Ss++;
      }
      int P = Ss*S;
      return P;
  }
}

string exercise_11(int number) {
  cin >> number;
  if (number == 11235813)
  {
      return "Se encontro a Fibonacci";
  }
  else
  {
      return "Esto no es de Fibonacci";
  }
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
                     if(color4 != color1 && color4 != color2 && color4 != color3 && numb4 != numb1 && numb4 != numb2 && numb4 != numb3){
                         cout << "" << endl;
                     }
                     else{
                     if (color4 == "?")
                     {
                       if(numb4 == numb1)
                  {
                       cout << 1 << endl;
                  }
                  if (numb4 == numb2)
                  {
                    cout << 2 << endl;
                  }
                  if (numb4 == numb3)
                  {
                    cout << 3 << endl; 
                  }
                     }
                     else if(numb4 == -1)
                     {
                         if(color4 == color1)
                  {
                       cout << 1 << endl;
                  }
                  if (color4 == color2)
                  {
                    cout << 2 << endl;
                  }
                  if (color4 == color3)
                  {
                    cout << 3 << endl; 
                  }
                     }
                     else{
                         if(color4 == color1 && numb4 == numb1)
                  {
                       cout << 1 << endl;
                  }
                  if (color4 == color2 && numb4 == numb2)
                  {
                    cout << 2 << endl;
                  }
                  if (color4 == color3 && numb4 == numb3)
                  {
                    cout << 3 << endl; 
                  }
                     }
                     }
                 }

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  // TODO: YOUR CODE HERE
  if (years_of_experience > age || age < 18)
  {
      return "Not eligible";
  }
  else
  {
      if (years_of_experience >= 5)
      {
          return "Senior project manager";
      }
      else if (years_of_experience >= 3)
      {
          return "Project manager";
      }
      else
      {
          return "Project coordinator";
      }
  }
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  if (number_of_docs <= 0)
  {
    return "No se encontraron documentos";
  }
  else if (number_of_docs == 1){
    return "Se encontro un documento";
  }
  else{
    string d = to_string(number_of_docs);
    return ( d + " documentos encontrados");
  }

}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE

}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
int h1 = 0;
  int h2 = 0;
  
   if ( debut == fin )
   {
       cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
   }
   else if (debut < 0 || debut > 24 || fin < 0 || fin > 24)
   {
       cout << "Las horas deben estar entre 0 y 24!" << endl;
   }
   else if (fin < debut)
   {
       cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
   }
   else if (debut < fin && debut >= 0 && debut <= 24 && fin >= 0 && debut <= 24 )
   {
           if ( debut < 7 )
           {
               h1 = 7 - debut;
           }
           else
           {
               if (debut < 17)
               {
                   h1 = (17 - debut)*2;
               }
               else
               {
                   h1 = debut - 17;
               }
           }
           if ( fin < 7 )
           {
               h2 = 7 - fin;
           }
           else;
           {
               if (fin < 17){
                   h2 = (17 - fin)*2;
               }
               else{
                   h2 = fin - 17;
               }
           }
           int h3 = h1 + h2;
           if (debut < 7 && fin > 17)
           {
               h3 = h3 + 20;
           }
           h2 = h2/2;
           int d = h2;
           h2 = h1;
           h1 = d;
           string h1s = to_string(h1);
           string h2s = to_string(h2);
           string h3s = to_string(h3);
           if (h1 == 0)
           {
            cout << h2s + " hora(s) con el tarifario de 2 boliviano(s)" << endl;
           cout << "El monto total a pagar es de " + h3s + " boliviano(s)" << endl;
           }
           else if (h2 == 0)
           {
            cout << h1s + " hora(s) con el tarifario de 1 boliviano(s)" << endl;
            cout << "El monto total a pagar es de " + h3s + " boliviano(s)" << endl;
           }
           else{
           cout << h1s + " hora(s) con el tarifario de 1 boliviano(s)" << endl;
           cout << h2s + " hora(s) con el tarifario de 2 boliviano(s)" << endl;
           cout << "El monto total a pagar es de " + h3s + " boliviano(s)" << endl;
           }
}
