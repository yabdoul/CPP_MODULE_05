#include "AForm.hpp"  
#include <fstream>  

class ShrubberyCreationForm :public AForm 
{  
private: 
    std::string  _target  ;   
public:
    ShrubberyCreationForm(std::string target ):AForm("shrubbery" ,145 , 137 ),_target(target) {}  ;    
    ~ShrubberyCreationForm(){} ;   
    ShrubberyCreationForm(ShrubberyCreationForm &copy):AForm(copy){(void) copy ;   };   
   
    void action() const   ;     
    AForm * createInstance( std::string Name  , std::string Target) ;   

} 
;