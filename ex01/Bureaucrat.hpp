#include "string" 
#include <exception>  
#include <iostream>

class GradeToHighException : public std::exception   
{ 
     private : 
       std::string  _reason  ;   
    public :  
        GradeToHighException( int grade )   {  _reason    =   std::to_string(grade).append(+ ": [Grade To High ]\n" ) ; } ;    
        ~GradeToHighException() {}  ;      
        virtual const char*   what() const throw()  ;  

} ;   

class GradeToLowException : public std::exception   
{ 
     private : 
       std::string  _reason  ;   
    public :  
        GradeToLowException( int grade )  {  _reason    =   std::to_string(grade).append(+ ": [Grade To Low ]\n" ) ; } ;    
        ~GradeToLowException() throw() {} ;      
        virtual const char*  what() const  throw()    ;    

} ; 

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
}; 
 

std::iostream operator<<(std::iostream  &a ,  Bureaucrat &b ) ;  
