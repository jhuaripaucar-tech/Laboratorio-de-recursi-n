#include  "turtlec/turtlec.h"
#include <math.h>
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
void variaciones(Turtle *turtle, float length, int depth) {

    if(depth == 0 || length < 5)
        return;

    if(depth > 5)
        turtleSetColor(turtle, 120, 70, 20);   
    else
        turtleSetColor(turtle, 0, 255 , 0);     

    turtleForward(turtle, length);

    turtleLeft(turtle, 30);
    variaciones(turtle, length * 0.7, depth - 1);

    turtleRight(turtle, 60);
    variaciones(turtle, length * 0.7, depth - 1);

    turtleLeft(turtle, 30);
    if(depth >= 5)
        turtleSetColor(turtle, 120, 70, 20);
    else
        turtleSetColor(turtle, 0, 255, 0);
    turtleBackward(turtle, length);
}
void levy ( Turtle * turtle , float length , int depth ) {
   if( depth == 0) {
      turtleForward ( turtle , length ) ;
      return ;
 }
   turtleLeft ( turtle , 45) ;
   levy ( turtle , length / sqrt (2) , depth - 1) ;
   turtleRight ( turtle , 90) ;
   levy ( turtle , length / sqrt (2) , depth - 1) ;

   turtleLeft ( turtle , 45) ;
}
void reto1(Turtle *turtle, float length, int depth) {

    if(depth == 0 || length < 5)
        return;

    turtleForward(turtle, length);

    turtleLeft(turtle, 30);
    reto1(turtle, length * 0.7, depth - 1);

    turtleRight(turtle, 30);
    reto1(turtle, length * 0.7, depth - 1);

    turtleRight(turtle, 30);
    reto1(turtle, length * 0.7, depth - 1);

    turtleLeft(turtle, 30);
    turtleBackward(turtle, length);
}
int main() {
    TurtleApp *app = turtleAppCreate(600, 600, "Arbol Fractal");

    if(app == NULL)
        return 0;

    Turtle *t = turtleAppGetTurtle(app);
    turtleLeft(t, 90);   
    reto1(t, 120, 5);
    turtleAppRun(app);
    return 0;
}
