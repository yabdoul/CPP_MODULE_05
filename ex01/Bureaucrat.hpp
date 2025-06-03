#include "string" 
#include <exception>  
#include <iostream>

class GradeToHighException : public std::exception   
{ 
     private : 
        int _grade ;   
    public :  
        GradeToHighException( int grade )   {  _grade    = grade ; } ;    
        ~GradeToHighException() {} ;      
        const  char *  what() const noexcept    ;   

} ;   

class GradeToLowException : public std::exception   
{ 
     private : 
        int _grade ;   
    public :  
        GradeToLowException( int grade )   {  _grade    = grade ; } ;    
        ~GradeToLowException() {} ;      
        const  char *  what() const noexcept    ;    

} ; 

class Bureaucrat
{
private:
    const std::string _Name ;   
    int _Grade ;  
public:
    Bureaucrat(std::string  Name    ,  int  Grade )  ;
    ~Bureaucrat(); 
    const std::string  getName() const ;   
    int  getGrade() const ; 
    void incGrade() ;    
    void decGrade() ;   
};

