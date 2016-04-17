#include "emenu.h"

eMenu::eMenu()
{
    mode = INTRO;
    connect(&intro,SIGNAL(FINISHED()),this,SLOT(introFinished()));
}

void eMenu::start(){
    intro.show();
}

void eMenu::introFinished(){
    intro.close();
    mw.show();
    mw.setClient(intro.getClient());
}
