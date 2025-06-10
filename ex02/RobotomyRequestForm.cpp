#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"   



 
void RobotomyRequestForm::informTarget(Bureaucrat &B ) 
{      
    try {    
        if(B.getGrade() >  getExecuteGrade())  
            {   
                std::cout<<"Robotonomy Failed"<<std::endl ;  
                throw GradeToLowException() ;  
            }   
        else 
            { 
                std::cout<<_target<<" has been robotomized succefully 50% of the time"<<std::endl ;   
            }
    } 
    catch(std::exception &e )  
    {  
         std::cerr<<e.what() ;   
    }
}  ;  