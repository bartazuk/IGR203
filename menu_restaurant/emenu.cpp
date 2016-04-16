#include "emenu.h"

eMenu::eMenu()
{
    mode = INTRO;
}

void eMenu::start(){
    intro.show();
}
