#include "AForm.hpp"  
#include <iostream>  

class PresidentialPardonForm : public AForm  
{
private:  
    std::string _target  ; 
public:
    PresidentialPardonForm(std::string target  ):AForm("Presed" , 25, 5), _target(target){};
    ~PresidentialPardonForm(){}; 
    PresidentialPardonForm(PresidentialPardonForm & copy):AForm(copy ),  _target(copy._target){} ;    
     void action( )  const   ;   
} 
 
; 