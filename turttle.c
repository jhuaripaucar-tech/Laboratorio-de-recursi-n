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
void reto2(Turtle *turtle, float length, int depth) {

    if(depth == 0 || length < 5)
        return;

    turtleForward(turtle, length);

    turtleLeft(turtle, 30);
    reto2(turtle, length * 0.6, depth - 1);

    turtleRight(turtle, 60);
    reto2(turtle, length * 0.8, depth - 1);

    turtleLeft(turtle, 30);
    turtleBackward(turtle, length);
}
void reto3(Turtle *turtle, float length, int depth) {

    if(depth == 0 || length < 5)
        return;

    if(depth >= 5)
        turtleSetColor(turtle, 120, 70, 20);
    else
        turtleSetColor(turtle, 0, 255, 0);

    turtleForward(turtle, length);

    turtleLeft(turtle, 30);
    reto3(turtle, length * 0.7, depth - 1);

    turtleRight(turtle, 60);
    reto3(turtle, length * 0.7, depth - 1);

    turtleLeft(turtle, 30);
    turtleBackward(turtle, length);
}
void reto4(Turtle *turtle, float length, int depth)
{
    if(depth == 0)
    {
        turtleForward(turtle, length);
        return;
    }
    if(depth >=5)
	    turtleSetColor(turtle,255,0,0);
    else if(depth >=3)
	    turtleSetColor(turtle,0,0,255);
    else 
	    turtleSetColor(turtle,0,255,0);
    turtleForward(turtle, length);

    turtleLeft(turtle, 45);
    reto4(turtle, length / 1.414, depth - 1);

    turtleRight(turtle, 90);
    reto4(turtle, length / 1.414, depth - 1);

    turtleLeft(turtle, 45);
}
int main() {
    TurtleApp *app = turtleAppCreate(600, 600, "Arbol Fractal");

    if(app == NULL)
        return 0;

    Turtle *t = turtleAppGetTurtle(app);
    turtleLeft(t, 90);   
    reto4(t, 50, 10);
    turtleAppRun(app);
    return 0;
}
