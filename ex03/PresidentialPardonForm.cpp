#include "PresidentialPardonForm.hpp"  


void PresidentialPardonForm::action( )  const  
{ 
        std::cout<<_target<<"Has been Pardoned By Zaplod Beeblebrox"<<std::endl  ;  
}  ;    


AForm *  PresidentialPardonForm::createInstance( std::string Name  , std::string Target)   
{ 
        AForm *Inst = new PresidentialPardonForm(Target);
        return Inst;
} ; 