#include <iostream>
using namespace std;


int main()
 {
 	
 	int n= 0, tabu= 0;
 	
 	cout<<"\nDigite um numero de 0 a 10\n";
 	cin>>tabu;
 	
 		if(tabu>=0 && tabu<=10){
 			
 			for(n=1; n<=10; n=n+1)
 				cout<<tabu<< "X" <<n<< "=" <<tabu*n<< "\n";}
 				
 		else{
 			cout<<"Numero Invalido";}
		 
 			
 			
 			
	return 0;
}
