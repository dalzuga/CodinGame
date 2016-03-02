#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
  int lightX; // the X position of the light of power
  int lightY; // the Y position of the light of power
  int initialTX; // Thor's starting X position
  int initialTY; // Thor's starting Y position
  scanf("%d%d%d%d", &lightX, &lightY, &initialTX, &initialTY);
  
  initialTX -= lightX;
  initialTY -= lightY;
    
  initialTY = -initialTY;

  lightX=0;
  lightY=0;
  
  // game loop
  while (1) {
    int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
    scanf("%d", &remainingTurns);

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    
    fprintf(stderr, "Debug message start (%d,%d)\n", initialTX, initialTY);
    fprintf(stderr, "Debug message start (%d,%d)\n", lightX, lightY);

    if (initialTY >= 0 && initialTX >= 0)     /* first quadrant */
      {
        fprintf(stderr, "Debug message q1 (%d,%d)\n", initialTX, initialTY);
        fprintf(stderr, "Debug message q1 (%d,%d)\n", lightX, lightY);
        
        if (initialTY == initialTX)
          {
	    printf("SW\n"); initialTY--; initialTX--; /* go southwest */
	  }
        else if (initialTY < initialTX)               /* if below initialTY=initialTX */
	  {
	    printf("W\n"); initialTX--; /* go west */
	  }
        else if (initialTY > initialTX)               /* if above initialTY=initialTX */
	  {
	    printf("S\n"); initialTY--; /* go south */
	  }
      }
    else if (initialTY >= 0 && initialTX <= 0)        /* second quadrant */
      {
	fprintf(stderr, "Debug message q2 (%d,%d)\n", initialTX, initialTY);
	fprintf(stderr, "Debug message q2 (%d,%d)\n", lightX, lightY);         
        if (initialTY == -initialTX)
	  {
	    printf("SE\n"); initialTY--; initialTX++; /* go southeast */
	  }
        else if (initialTY > -initialTX)              /* if above initialTY=-initialTX */
	  {
	    printf("S\n"); initialTY--;      /* go south */
	  }
        else if (initialTY < -initialTX)      /* if below initialTY=-initialTX */
	  {
	    printf("E\n"); initialTX++;      /* go east */
	  }
      }
    else if (initialTY <= 0 && initialTX <= 0)        /* third quadrant */
      {
	fprintf(stderr, "Debug message q3 (%d,%d)\n", initialTX, initialTY);
	fprintf(stderr, "Debug message q3 (%d,%d)\n", lightX, lightY);         
        if (initialTY == initialTX)
	  {
	    printf("NE\n"); initialTY++; initialTX++;/* go northeast */
	  }
        else if (initialTY > initialTX)
	  {
	    printf("E\n"); initialTX++; /* go east */
	  }
        else if (initialTY < initialTX)
	  {
	    printf("N\n"); initialTY++; /* go north */
	  }
      }
    else if (initialTY <= 0 && initialTX >= 0)        /* fourth quadrant */
      {
	fprintf(stderr, "Debug message q4 (%d,%d)\n", initialTX, initialTY);
	fprintf(stderr, "Debug message q4 (%d,%d)\n", lightX, lightY);         
        if (initialTY == -initialTX)
	  {
	    printf("NW\n"); initialTY++; initialTX--; /* go northwest y++ x-- */
	  }
        else if (initialTY < -initialTX)
	  {
	    printf("N\n"); initialTY++; /* go north y++ */
	  }
        else if (initialTY > -initialTX)
	  {
	    printf("W\n"); initialTX--;/* go west x-- */
	  }
      }

    fprintf(stderr, "Debug message final (%d,%d)\n", initialTX, initialTY);
    fprintf(stderr, "Debug message final (%d,%d)\n", lightX, lightY);

    /*   if (lightX > initialTX && lightY > initialTY) */
    /*     printf("SE\n"); */
    /*   else if (lightX > initialTX && lightY == initialTY) */
    /*     printf("E\n"); */
    /*   else if (lightX > initialTX && lightY < initialTY) */
    /*     printf("NE\n"); */
    /*   else if (lightX == initialTX) */
    /*     { */
    /*  if (lightY > initialTY) */
    /*    printf("S\n"); */
    /*  else */
    /*    printf("N\n"); */
    /*     } */
    /*   else if (lightY > initialTY) */
    /*     printf("SW\n"); */
    /*   else if (lightY == initialTY) */
    /*     printf("W\n"); */
    /*   else */
    /*     printf("NW\n"); */
    /* } */
  }

  return 0;
}
