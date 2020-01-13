#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TURNS 75
#define PLAYERS 6
int main()
{

  printf( "\tMonopoly Stats - By Michael K. Pellegrino - (C) 2018\n\nA Simulation that shows the number of times players land on each property in a game with %d players and %d turns.\n\n",PLAYERS,TURNS );
  int stats[40]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int die[2]={0,0};
  srand(time(NULL));

  for( int j=0; j<PLAYERS; j++ )
    {
      int position=0;
      int doubles_count=0;
      
      for( int i=0; i<TURNS; i++ )
	{
	  /* roll the dice */
	  die[0]=(rand() % 6)+1;
	  die[1]=(rand() % 6)+1;
	  position=position+die[0]+die[1];
	  
	  if( position>39 ) position-=40;
	  
	  if( die[0] == die[1] )
	    {
	      doubles_count++;
	      i--;
	    }
	  else
	    {
	      doubles_count=0;
	    }
	  
	  if( doubles_count==3 )
	    {
	      /* printf( "***\n" ); */
	      position=10;
	      doubles_count=0;
	    }
	  else if( position==30 )
	    {
	      stats[30]++;
	      position=10;
	      doubles_count=0;
	    }
	  else
	    {
	      stats[position]++;
	    }
	  
	  /* printf( "1: %d\t2: %d\tP: %d\n", die[0], die[1], position ); */
	  
	  
	}
    }
  for( int i=0; i<40; i++ )
    {
      switch(i)
	{
	case 0:
	  printf( "Go\t" );
	  break;
	case 1:
	  printf( "\nMediterranean" );
	  break;
	case 2:
	  printf( "Community Chest" );
	  break;
	case 3:
	  printf( "Baltic\t" );
	  break;
	case 4:
	  printf( "\nIncome Tax" );
	  break;
	case 5:
	  printf( "\nReading RR" );
	  break;
	case 6:
	  printf( "\nOriental" );
	  break;
	case 7:
	  printf( "Chance\t" );
	  break;
	case 8:
	  printf( "Vermont\t" );
	  break;
	case 9:
	  printf( "Connecticut" );
	  break;
	case 10:
	  printf( "\nJust Visiting" );
	  break;
	case 11:
	  printf( "\nSt Charles" );
	  break;
	case 12:
	  printf( "Electric Co" );
	  break;
	case 13:
	  printf( "States\t" );
	  break;
	case 14:
	  printf( "Virginia" );
	  break;
	case 15:
	  printf( "\nPennsylvania RR" );
	  break;
	case 16:
	  printf( "\nSt James" );
	  break;
	case 17:
	  printf( "Community Chest" );
	  break;
	case 18:
	  printf( "Tennessee" );
	  break;
	case 19:
	  printf( "New York" );
	  break;
	case 20:
	  printf( "\nFree Parking" );
	  break;
	case 21:
	  printf( "\nKentucky" );
	  break;
	case 22:
	  printf( "Chance\t" );
      	  break;
	case 23:
	  printf( "Indiana\t" );
	  break;
	case 24:
	  printf( "Illinois" );
	  break;
	case 25:
	  printf( "\nB & O RR" );
	  break;
	case 26:
	  printf( "\nAtlantic" );
	  break;
	case 27:
	  printf( "Ventnor\t" );
	  break;
	case 28:
	  printf( "Water Works");
	  break;
	case 29:
	  printf( "Marvin Gardens" );
	  break;
	case 30:
	  printf( "\nGo to Jail" );
	  break;
	case 31:
	  printf( "\nPacific\t" );
	  break;
	case 32:
	  printf( "North Carolina" );
	  break;
	case 33:
	  printf( "Community Chest" );
	  break;
	case 34:
	  printf( "Pennsylvania" );
	  break;
	case 35:
	  printf( "\nShort Line RR" );
	  break;
	case 36:
	  printf( "\nChance\t" );
	  break;
	case 37:
	  printf( "Park Place" );
	  break;
	case 38:
	  printf( "Luxury Tax" );
	  break;
	case 39:
	  printf( "Boardwalk" );
	}
	
      printf( "\t%d\n", stats[i] );
    }
  return 0;
}


