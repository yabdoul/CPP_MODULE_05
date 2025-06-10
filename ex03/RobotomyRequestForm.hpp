#include "AForm.hpp"  

class RobotomyRequestForm : public AForm 
{
private:
    std::string _target ;   
public:
    RobotomyRequestForm(std::string target):AForm("Robotonomy" ,72,45),_target(target){}  ;  
    ~RobotomyRequestForm();
    void action(Bureaucrat &B ) ;   
    AForm * createInstance( std::string Name  , std::string Target) ;  

}; 