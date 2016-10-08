/*


*/

#include "ISurvivor.h"
#include <typeinfo>

void ISurvivor::attack(IZombie * zombie){
    (const_cast<ICharacter *>(zombie)).decreaseHealth(getAttack());

}


string ISurvivor::getName(){
   this->getAttack(); 
    

}
