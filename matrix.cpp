#include <iostream>
using namespace std;

int main()
{
   
   
   int a [2][2];
   int b [2][2];
   
   
   cout << "1st Matrix:" << endl;
   for(int i=0; i< 2; i++){
       for(int j=0; j <2; j++){
           cin >> a[i][j];
          
           cout << a[i][j] << endl;
       }
   }
   
   cout << "2nd Matrix:";
   for(int i=0; i< 2; i++){
       for(int j=0; j <2; j++){
           cin >> b[i][j];
          
           cout << b[i][j] << endl;
       }
   }
   
   //10 20
   //30 40
   
   //50 60
   //70 80
   cout << "Result" << endl;
   
    for(int i=0; i< 2; i++){
       for(int j=0; j <2; j++){
          
          
           cout << a[i][j] + b[i][j] << endl;
       }
   }
 
  
   
    return 0;
}
