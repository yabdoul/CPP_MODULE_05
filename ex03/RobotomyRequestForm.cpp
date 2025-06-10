#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"   



 
void     RobotomyRequest::action(Bureaucrat &B ) ;   

{      
    try {    
        if(B.getGrade() >  getExecuteGrade())  
            {   
                std::cout<<"Robotonomy Failed"<<std::endl ;  
                throw GradeToLowException() ;  
            }   
        else 
            { 
                std::cout<<_target<<"has been robotomized succefully 50% of the time"<<std::endl ;   
            }
    } 
    catch(std::exception &e )  
    {  
         std::cerr<<e.what() ;   
    }
}

AForm * RobotomyRequestForm::createInstance( std::string Name  , std::string Target)  
{ 
    AForm * inst =  new RobotomyRequestForm(Target )  ;  
    return inst ;              
}
