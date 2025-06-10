
#include <string>  
#include "RobotomyRequestForm.hpp" 
#include "PresidentialPardonForm.hpp"  
#include "ShrubberyCreationForm.hpp"   

class Intern { 
    public  :  
        Intern()  {};  
        ~Intern()  {};   
        
      AForm *   makeForm(std::string formName , std::string formTarget   )  const   ;  
}  ;  