#include "Bureaucrat.hpp"  

int main() 
{   
    /*Normal Grade*/ 
    Bureaucrat b1("b1" ,  10) ;  
    /*Grade to low Test*/  
    Bureaucrat b2("b2"  , 160)  ; 
    b2.decGrade() ;     
    /*Grade to High test*/ 
    Bureaucrat b3("b3" , 0 )   ; 
    b3.incGrade() ;        
    return  0 ;   
}