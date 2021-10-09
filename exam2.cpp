#include<iostream>
using namespace std ;

int main(void){

	int p , q ;
	int c;

	
	cout<<endl<<"P = ";
	cin >> p;
	cout<<endl<<"Q = ";
	cin>>q;
	cout<<endl<<" C = ";
	cin>>c;

	int n = 0, i , j = 1 ;
	switch (c){
		case'+' : for(i=p ; i <= q ; i++)
		n+=q;
		return n ;
		
	   case '*' : for ( i = p ; i<=q  ; i++)
	    j*=i;
	    return j ;
	    
	    case '^' : for ( i = 0 ; i< q ; i++)
	    j=j*p;
	    return j ;
	}
	return -1;
}



