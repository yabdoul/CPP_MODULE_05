#pragma once 
#include <exception>  
#include <iostream>
#include "AForm.hpp" 
#include <unistd.h> 


class Bureaucrat
{
private:
    const std::string _Name ;   
    int _Grade ;  
public:
    Bureaucrat(std::string  Name    ,  int  Grade )     ;
    ~Bureaucrat() {}; 
    const std::string  getName() const ;   
    int  getGrade() const ; 
    void incGrade() ;    
    void decGrade() ;    
    void signForm(AForm &F )   ;  
  

    class GradeToHighException : public std::exception   
{ 
     private : 
       std::string  _reason  ;   
    public :  
        GradeToHighException( )   {  _reason    = "[Grade To High ]\n"  ; } ;    
        ~GradeToHighException()  throw() {};   
        virtual const char*   what() const throw()  ;  

} ;   

class GradeToLowException : public std::exception   
{ 
     private : 
       std::string  _reason  ;   
    public :  
        GradeToLowException(  )  {  _reason    = "[Grade To Low ]\n" ;   } ;    
        ~GradeToLowException() throw() {} ;      
        virtual const char*  what() const  throw()    ;    

} ; 
}; 

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
