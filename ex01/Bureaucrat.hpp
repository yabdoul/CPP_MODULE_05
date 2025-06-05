#pragma once 
#include <exception>  
#include <iostream>
#include "Form.hpp" 
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
    void signForm(Form &F , std::string reason  ="" )   ;  
  

    class GradeToHighException : public std::exception   
{ 
     private : 
       std::string  _reason  ;   
    public :  
        GradeToHighException( )   {  _reason    = ": [Grade To High ]\n"  ; } ;    
        ~GradeToHighException()  throw() {};   
        virtual const char*   what() const throw()  ;  

} ;   

class GradeToLowException : public std::exception   
{ 
     private : 
       std::string  _reason  ;   
    public :  
        GradeToLowException(  )  {  _reason    = ": [Grade To Low ]\n" ;   } ;    
        ~GradeToLowException() throw() {} ;      
        virtual const char*  what() const  throw()    ;    

} ; 
}; 

std::iostream operator<<(std::iostream  &a ,  Bureaucrat &b ) ;
