#include "Form.hpp"  
#include <iostream> 

Form::Form(std::string  name , int signGrade ,  int executeGrade ):_name(name),_signGrade(signGrade),_executeGrade(executeGrade) 
{  
    std::cout<<"Form Constructor Called\n" ;   
}  
 
Form::Form(const Form &F)
    : _name(F._name), _signed(F._signed), _signGrade(F._signGrade), _executeGrade(F._executeGrade)
{
    std::cout << "Form Copy Constructor Called\n";
}  

Form::~Form() 
{ 
    std::cout<<"Calling Form Destruction"<<std::endl ;  
}  

int Form::getExecuteGrade() const   
{ 
    return _executeGrade ;  
}  

int Form::getSignGrade() const  
{ 
    return  _signGrade ;  
}  

const std::string Form::getName() const   
{ 
     return _name  ;  
}  
  
bool Form::isSigned() const  
{ 
     return  _signed ;   
}   

void  Form::beSigned(Bureaucrat &B  ) 
{  
    try{  
        if(B.getGrade() >= _signGrade )  
        { 
            B.signForm(true)  ;   
            _signed = true ;    
        }  
        else if(B.getGrade() < _signGrade)
            { 
                B.signForm(false , "[Grade To Low]") ;   
                throw GradeToHighException(B.getGrade());  
            } 
        } 
        catch(std::exception& e )  
        {  
            std::cerr<<e.what()<<std::endl;   
        } 

}  ;  

