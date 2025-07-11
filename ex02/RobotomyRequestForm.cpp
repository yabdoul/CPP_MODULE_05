#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"   
#include <math.h>  


 
void RobotomyRequestForm::action( )  const 
{   
    std::cout<<"Drilling Noise ---------------------------------"<<std::endl ;   
    srand(time(0)) ;   
    int random  = rand() % 2  ;  
    (random == 1 )?(std::cout<<_target<<" Has been robotomized successfully"<<std::endl)
                  :(std::cout<<"The robotomy failed."<<std::endl );  
}  ;    
