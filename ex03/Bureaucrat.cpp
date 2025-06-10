#include "Bureaucrat.hpp"  
#include <iostream> 
/**
 * @brief Returns a C-string describing the "Grade Too High" exception.
 *
 * This method overrides the std::exception::what() function to provide
 * a custom error message that includes the invalid grade value and a
 * descriptive message indicating that the grade is too high.
 *
 * @return const char* A pointer to a null-terminated string with the error message.
 */ 
 const char*   Bureaucrat::GradeToHighException::what() const   throw()
{  
   return  _reason.c_str() ;   
} ;     
 
/**
 * @brief Returns a C-string describing the GradeToHighException.
 *
 * This method overrides the std::exception::what() function and returns
 * a message containing the grade value followed by the string ": [Grade To Low ]".
 *
 * @return const char* A pointer to a C-string describing the exception.
 * @note The returned pointer may become invalid because it points to a temporary string.
 */
 const char*    Bureaucrat::GradeToLowException::what() const  throw()
{ 
  return _reason.c_str()  ;  
} 

Bureaucrat::Bureaucrat(std::string  Name    ,  int  Grade ): _Name(Name),_Grade(Grade){ 
     try{
          if  (_Grade <  1  )  
              throw GradeToHighException() ;  
          else if(_Grade > 150  )  
              throw GradeToLowException() ;   
     } 
     catch(std::exception &e   ) 
      { 
        std::cout<<e.what() ;  
      } ;  
} ;   

int  Bureaucrat::getGrade() const  { 
     return _Grade  ;    
}  ;  

const std::string Bureaucrat::getName() const 
{ 
    return _Name  ;   
} ;    

void Bureaucrat::decGrade()  
{ 
   try
   {
    (_Grade + 1 >  150  ) ?  throw GradeToLowException(): _Grade += 1  ;     
   }
   catch( std::exception &e  )
   {
      std::cerr << e.what() ;  
   }
} 
 

void Bureaucrat::incGrade() 
{ 
    try
    {
      (_Grade - 1 < 1  ) ?  throw GradeToHighException(): _Grade -= 1  ;     
    }
    catch(std::exception &e  )
    {   
      std::cerr << e.what() ;
    }  
}  

std::ostream& operator<<(std::ostream& a, const Bureaucrat& b) { 
     a << b.getName() << ", bureaucrat grade " << b.getGrade() << "\n";   
     return a;  
}  

void Bureaucrat::signForm(AForm &F , std::string reason  )  
{   
  
   (F.isSigned()) ?(std::cout<<_Name<<" Signed the Form "<<F.getName()<<std::endl):(std::cout<<_Name<<" couldn't sign "<<F.getName()<<"because"<<reason<<std::endl) ;     
}