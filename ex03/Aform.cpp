#include "AForm.hpp"  
#include <iostream> 
#include "Bureaucrat.hpp"  

AForm::AForm(std::string  name , int signGrade ,  int executeGrade ):_name(name),_signGrade(signGrade),_executeGrade(executeGrade)
{   
    _signed = false ;   
    std::cout<<"AForm Constructor Called\n" ;   
}  
 
AForm::AForm(const AForm &F)
    : _name(F._name), _signed(F._signed), _signGrade(F._signGrade), _executeGrade(F._executeGrade)
{
    std::cout << "AForm Copy Constructor Called\n";
}  

AForm::~AForm() 
{ 
    std::cout<<"Calling AForm Destruction"<<std::endl ;  
}  

int AForm::getExecuteGrade() const   
{ 
    return _executeGrade ;  
}  

int AForm::getSignGrade() const  
{ 
    return  _signGrade ;  
}  

const std::string AForm::getName() const   
{ 
     return _name  ;  
}  
  
bool AForm::isSigned() const  
{ 
     return  _signed ;   
}

const char * AForm::GradeToLowException::what() const  throw()
{ 
    return _reason.c_str() ;   
}

void  AForm::beSigned(Bureaucrat &B  ) 
{  
    try{  
        if(B.getGrade() <=  _signGrade )  
        {   
            _signed = true ;    
            B.signForm(*this )  ;   
        }  
        else if(B.getGrade() > _signGrade)
            { 
                B.signForm(*this , "[Grade To Low]") ;   
                throw AForm::GradeToLowException();  
            } 
        } 
        catch(std::exception& e )  
        {  
            std::cerr<<e.what()<<std::endl;   
        } 
 
}  ;  

void AForm::setSigned() 
{  
    _signed = true   ;   
}  ;    
 
   
void AForm::executeForm(Bureaucrat &executor ) 
{   
    try {  
          beSigned(executor)  ;  
          if(executor.getGrade() > _executeGrade )    
          {     
            std::cerr<<"------------Can't Execute Form [Reason] :------------"<<std::endl ;    
            throw GradeToLowException() ;  
          } 
             else 
            this->action()  ;     
    } 
    catch(std::exception   &e ) 
     {  
        std::cerr<<e.what()   ;   
     }
}  ;   

 