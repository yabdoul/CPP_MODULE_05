#include "AForm.hpp"  
#include "Bureaucrat.hpp" 
#include "PresidentialPardonForm.hpp"  
#include "RobotomyRequestForm.hpp"  
#include "ShrubberyCreationForm.hpp"  

int main() 
{    
    ShrubberyCreationForm sh("me") ;  
    Bureaucrat b("ysf" ,  140 )    ;   
    sh.executeForm(b) ;   
    return 0 ;   
}