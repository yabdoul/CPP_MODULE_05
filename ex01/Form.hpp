#pragma once 
#include <string>   
 
class Bureaucrat ;  
class Form
{
private:
    const std::string  _name  ;   
    bool _signed ;  
    int _signGrade; 
    int _executeGrade  ;   
public:
    Form(std::string  name , int signGrade ,  int executeGrade ) ;   
    Form(const  Form  &F)  ;   
    ~Form() ;   
    Form&  operator=(Form &copy ) ;   
    const std::string  getName() const ;   
    int getSignGrade()  const ;  
    int getExecuteGrade() const  ;  
    bool isSigned() const  ;   
    void beSigned(Bureaucrat &B  )  ;   

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
