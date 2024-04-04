#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std; 
class Issiqkiyimla{ 
 private : 
 string nomi,firma,sezoni,ranngi; 
 int sifati; 
 
 float narxi; 
 public : 
  void show() 
  { 
   static int k=0; 
   cout<<++k<<" - issiqkiyimlar"<<endl<<endl; 
   cout<<"Nomi: "<<nomi<<endl; 
   cout<<"sifati: "<<sifati<<endl;    
   cout<<"sezoni: "<<sezoni<<endl; 
   cout<<"ranngi: "<<ranngi<<endl; 
   cout<<"Narxi: "<<narxi<<endl; 
  }; 
  void input(){ 
   static int k=0; 

   cout<<++k<<" - issiqkiymlar"<<endl<<endl; 
   cout<<"Nomi: ";cin>>nomi; 
   cout<<"sifati: ";cin>>sifati; 
   cout<<"sezoni: ";cin>>sezoni; 
   cout<<"ranngi: ";cin>>ranngi; 
   cout<<"Narxi: ";cin>>narxi; 
   cout<<"Firma: ";cin>>firma; 
   cout<<endl; 
  }; 
  void qidir(string s){ 
   if(nomi.compare(s)==0) 
   { 
    cout<<"Bunday nomli issiqkiym yuk"; 
    show(); 
   } 


}; 
void qidir1(string d){ 
   if(firma.compare(d)==0) 
   { 
    cout<<"Bunday nomli issiqkiym yuk"; 
    show(); 
   } 
  }; 
}; 
int main() 
{ 
 Issiqkiyimla t[100]; 
 int N;cout<<"issiqkiym sonni kriting";cin>>N;  
 for(int i=0;i<N;i++) 
 { 
  t[i].input(); 
 } 
 string s; 
 cout<<endl<<"Qidiriliyotgan issiqkiym nomini kriting";cin>>s; 
 for(int i;i<N;i++) 
 { 
  t[i].qidir(s); 
 } 
 string d; 
 cout<<endl<<"Qidiriliyotgan issiqkiym firmasini kiriting";cin>>d; 

 for(int i;i<N;i++) 
 { 
  t[i].qidir1(d); 
 } 
}
