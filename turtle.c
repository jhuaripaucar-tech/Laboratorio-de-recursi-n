#include "turtlec.h"

int main(void) {

    TurtleApp *app = turtleAppCreate(600, 600, "Mi dibujo");

    if(app == NULL)
        return 1;

    Turtle *t = turtleAppGetTurtle(app);

    turtlePenDown(t);

    turtleForward(t, 100);

    turtleRight(t, 90);

    turtleForward(t, 100);

    turtleAppRun(app);

    turtleAppDestroy(app);

    return 0;
}
