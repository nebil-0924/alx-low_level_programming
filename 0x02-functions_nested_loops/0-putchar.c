#include "stdio.h"



/**
 *
 *  * main - prints putchar
 *
 *   *
 *
 *    * Description: prints putchar
 *
 *     *
 *
 *      * Return:Always 0 (Success)
 *
 *       */



int main(void)

{

		char text[8] = "putchar";

			int i = 0;



				for (i = 0; i < 7; i++)

						{

									putchar(text[i]);

										}

					putchar('\n');



						return (0);

}
