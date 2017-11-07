//Diana Ivonee Huitzil Sosa
#include<iostream>
using namespace std;
int main() {
  char variable;
  cout<<"Dame un vaor entre A, B, C, D, F"<<endl;
  cin>>variable;
    switch (variable){
 case 'A': cout<<"excelente"<<endl;
   break; 
case 'B': cout<<"muy bien"<<endl;
  break;
 case 'C': cout<<"bien"<<endl;
   break;
 case 'D': cout<<"pasaste"<<endl;
   break;
 case 'F': cout<<"intenta de nuevo"<<endl;
   break;
 default: cout<<"opcion no valida"<<endl;
 }

return 0;
}
