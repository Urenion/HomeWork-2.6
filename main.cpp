#include <stdio.h>

main() 
{
	int day, mounth, year;
	printf("Write your birthday\nday: ");
	scanf("%i",&day);
	printf("mounth: ");
	scanf("%i",&mounth);
	printf("year: ");
	scanf("%i",&year);
	
	if 
	(year%4==0)
	{
	printf("You were born on a leap year\n\n");
	} 
	else
	{
	printf("You were born on a non-leap year\n\n");
	}
	printf("Eastern calendar sign: ");
	switch(year%12)
	{
		case 0:
			{
			printf("Monkey");
			}
		break;
				case 1:
			{
			printf("Rooster");
			}
		break;
				case 2:
			{
			printf("Dog");
			}
		break;
				case 3:
			{
			printf("Pig");
			}
		break;
				case 4:
			{
			printf("Rat");
			}
		break;
				case 5:
			{
			printf("Ox");
			}
		break;
				case 6:
			{
			printf("Tiger");
			}
		break;
				case 7:
			{
			printf("Rabbit");
			}
		break;
				case 8:
			{
			printf("Dragon");
			}
		break;
				case 9:
			{
			printf("Snake");
			}
		break;
				case 10:
			{
			printf("Horse");
			}
		break;
				case 11:
			{
			printf("Goat");
			}
		break;
	  }
	  printf("\n\nZodiac sign: ");
	  if
	  (mounth==1&&day>19||mounth==2&&day<19)
	  {
	  	printf("Aquarius");
		}
			  if
	  (mounth==2&&day>18||mounth==3&&day<21)
	  {
	  	printf("Pisces");
		}
			  if
	  (mounth==3&&day>20||mounth==4&&day<20)
	  {
	  	printf("Aries");
		}
			  if
	  (mounth==4&&day>19||mounth==5&&day<21)
	  {
	  	printf("Taurus");
		}
			  if
	  (mounth==5&&day>20||mounth==6&&day<21)
	  {
	  	printf("Gemini");
		}
			  if
	  (mounth==6&&day>20||mounth==7&&day<23)
	  {
	  	printf("Cancer");
		}
			  if
	  (mounth==7&&day>22||mounth==8&&day<23)
	  {
	  	printf("Leo");
		}
			  if
	  (mounth==8&&day>22||mounth==9&&day<23)
	  {
	  	printf("Virgo");
		}
			  if
	  (mounth==9&&day>22||mounth==10&&day<23)
	  {
	  	printf("Libra");
		}
			  if
	  (mounth==10&&day>22||mounth==11&&day<22)
	  {
	  	printf("Scorpio");
		}
			  if
	  (mounth==11&&day>21||mounth==12&&day<22)
	  {
	  	printf("Sagittarius");
		}
			  if
	  (mounth==12&&day>21||mounth==1&&day<20)
	  {
	  	printf("Capricorn");
		}  
}
