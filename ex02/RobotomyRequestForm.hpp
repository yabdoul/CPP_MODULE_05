#include "AForm.hpp"  

class RobotomyRequestForm : public AForm 
{
private:
    std::string _target ;   
public:
    RobotomyRequestForm(std::string target):AForm("Robotonomy" ,72,45),_target(target){}  ;  
   void  informTarget(Bureaucrat &B ) ;     
   void action() const  ;   
    ~RobotomyRequestForm() {};
};