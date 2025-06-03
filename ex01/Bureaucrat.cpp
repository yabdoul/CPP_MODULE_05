#include "Bureaucrat.hpp"  


/**
 * @brief Returns a C-string describing the "Grade Too High" exception.
 *
 * This method overrides the std::exception::what() function to provide
 * a custom error message that includes the invalid grade value and a
 * descriptive message indicating that the grade is too high.
 *
 * @return const char* A pointer to a null-terminated string with the error message.
 */
const char  *  GradeToHighException::what() const   noexcept
{  
  return   std::to_string(_grade ).append(": [Grade To High ]").c_str() ;   
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
const char  *  GradeToLowException::what() const  noexcept
{  
  return   std::to_string(_grade ).append(": [Grade To Low ]\n").c_str() ;   
} ;     

Bureaucrat::Bureaucrat(std::string Name  ,  int Grade   ) : _Name(Name),_Grade(Grade){ 
     try{
          if  (_Grade <  1  )  
              throw GradeToHighException(_Grade) ;  
          else if(_Grade > 150  )  
              throw GradeToLowException(_Grade ) ;   
     } 
     catch(std::exception e   ) 
      { 
        std::cerr<<e.what() ;  
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
    ( 
          if(_Grade  +  1  > 150 )  
                throw GradeToHighException(_Grade  +   1  )   ;  
    )
    catch(std::exception &e ) { 

    }
}  
