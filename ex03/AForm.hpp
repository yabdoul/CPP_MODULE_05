#pragma once 
#include <string>   
 
class Bureaucrat ;  
class AForm
{
private:
    const std::string  _name  ;   
    bool _signed    ;   
    int _signGrade; 
    int _executeGrade  ;   
public:  
    AForm(){ } ;   
    AForm(std::string  name , int signGrade ,  int executeGrade ) ;   
    AForm(const  AForm  &F)  ;   
    ~AForm() ;   
    AForm&  operator=(AForm &copy ) ;   
    const std::string  getName() const ;   
    int getSignGrade()  const ;  
    int getExecuteGrade() const  ;  
    bool isSigned() const  ;    
    void setSigned( ) ;   
    void beSigned(Bureaucrat &B  )  ;   
    virtual void executeForm(Bureaucrat &executor )  ;     
    virtual  void action() const    = 0 ;    
    virtual AForm * createInstance( std::string Name  , std::string Target) =0 ;    
    class GradeToLowException : public std::exception   
    { 
      private : 
           std::string  _reason  ;   
        public :  
            GradeToLowException(  )  {  _reason    = "-----Exception : [Grade To Low ]------\n" ;   } ;    
             ~GradeToLowException() throw() {} ;      
            virtual const char*  what() const  throw()    ;    

    } ; 
    
};   
