#include "turtlec.h"

void fractalTree(Turtle *t, float length, int depth){
    if(depth == 0 || length < 5)
        return;

    turtleForward(t, length);

    turtleLeft(t, 30);
    fractalTree(t, length * 0.7, depth - 1);

    turtleRight(t, 60);
    fractalTree(t, length * 0.7, depth - 1);

    turtleLeft(t, 30);
    turtleBackward(t, length);
}

int main(void){
    TurtleApp *app = turtleAppCreate(600, 600, "Arbol Fractal");

    if(app == NULL)
        return 0;

    Turtle *t = turtleAppGetTurtle(app);
    turtleLeft(t,90); 
    fractalTree(t, 100, 7);

    turtleAppRun(app);

    return 0;
}
