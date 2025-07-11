#include "AForm.hpp"  
#include "Bureaucrat.hpp" 
#include "PresidentialPardonForm.hpp"  
#include "RobotomyRequestForm.hpp"  
#include "ShrubberyCreationForm.hpp"  

int main() 
{    
    RobotomyRequestForm sh("vcme") ;  
    Bureaucrat b("ysf" ,  2)   ; 
    b.signForm(sh) ;     
    sh.executeForm(b) ;   
    return 0 ;   
}